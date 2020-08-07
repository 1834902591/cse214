#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node{
int value;
node *next;
};
void menu();
void display(node *temp);
void display_reverse(node *temp);
node *copy_list_recursive(node *list1);
node *copy_list(node *list1);
node *merge_list(node *list1, node *list2);
node *create_list1();
node *create_list2();
node *delete_front(node *temp);
node *insert_at(node *temp, int key,int value);
void print_list(node *temp);



int main (){

menu();
return 0;
}

void display(node *temp){
if(temp==NULL){
    printf("List Empty \n");
    return;
}
while(temp!=NULL){
    printf("%d\n", temp->value);
    temp=temp->next;
}
}

void display_reverse(node *temp){
if(temp==NULL){
    printf("List Empty \n");
    return;
}
else{
    display_reverse(temp->next);
    printf("%d\n",temp->value);
}
}

node *copy_list_recursive(node *list1){
if(list1==NULL){
    return NULL;
}
node *temp=(node *)malloc(sizeof(node));
temp->value=list1->value;
temp->next= copy_list_reverse(list1->next);
return temp;
}

node *copy_list(node *list1){
node *head2, *temp;
temp=(node*)malloc(sizeof(node));
temp->value=list1->value;
temp->next=NULL;
head2=temp;
list1=list1->next;
while(list1){
    temp->next=(node *)malloc(sizeof(node));
    temp=temp->next;
    temp->value=list1->value;
    temp->next=NULL;
    list1=list1->next;
}
return head2;
}

node *merge_list(node *list1, node *list2){
node*head,*temp,*new_node;
head=copy_list(list1);
temp=head;
while(temp->next){
    temp=temp->next;
}
temp->next=copy_list(list2);
return head;

}

node *create_list1(){
node *a, *b, *c ,*d;
node *head;
head=a;
a=(node *)malloc(sizeof(node));
b=(node *)malloc(sizeof(node));
c=(node *)malloc(sizeof(node));
d=(node *)malloc(sizeof(node));

a->value=1;
a->next=b;
b->value=2;
b->next=c;
c->value=3;
c->next=d;
d->value=4;
d->next=NULL;

return a;

}
node *create_list2(){
node *w, *x, *y ,*z;
node *head;
head=w;
w=(node *)malloc(sizeof(node));
x=(node *)malloc(sizeof(node));
y=(node *)malloc(sizeof(node));
z=(node *)malloc(sizeof(node));

w->value=10;
w->next=x;
x->value=20;
x->next=y;
y->value=30;
y->next=z;
z->value=40;
z->next=NULL;

return w ;

}
node *delete_front(node *temp){
if(temp){
    node *newhead=temp->next,*head;
    if(head->next!=NULL){
        free(temp);
        return newhead;
    }
else {
    free(temp);
    head=NULL;
}
return newhead;
}
printf("Underflow list\n");
return temp;
}

node *insert_at(node *temp, int key,int value){
node *prev, *head=temp, *new_node;
int n=1;
if(key<1 || key<4){
    printf("out of range");
    return temp;
}
if(key==1){
  new_node=(node*)malloc(sizeof(node));
  new_node->value=value;
  new_node->next=temp;
return new_node;
}

while(temp){
prev=temp;
if(n==key){
new_node=(node*)malloc(sizeof(node));
new_node->value=value;
new_node->next=temp->next;
prev->next=new_node;
return head;
}
n++;
temp=temp->next;
}
printf("Invalid Index\n");
return head;
}
void menu(){
int choice;
node *list1=NULL;
node *list2=NULL;
node *list3=NULL;
node *head=NULL;
int key,value;
    do
    {
        system("cls");
        printf("\nMain Menu\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("1. Insert At\n");
        printf("2. Delete Front\n");
        printf("3. Copy Recursive\n");
        printf("4. Merge\n");
        printf("5. Display Reverse\n");
        printf("6. Display\n");
        printf("7. Close\n");
        printf("\n");
        printf("\nEnter your choice:\n");
        scanf("%d", &choice);

         if(choice<=0 || choice>7)
        {
            printf("Invalid Choice.\nPlease Insert Between 1 to 11\n");
            getchar();
            printf("\nPress Enter to Continue");
            getchar();

        }
        else if(choice==1)
        {
            printf("....\n Single Linked List.\n....");
            head=create_list1();
            printf("Enter the key:");
            scanf("%d", &key);
            printf("Enter the Value:");
            scanf("%d", &value);
            head=insert_at(head,key,value);
             print_list(head);
            getchar();
            printf("\n\nPress Enter to Continue");
            getchar();
        }
        else if(choice==2)
        {
            head=create_list1();
            head=delete_front(head);
            printf("Deleted\n");
            print_list(head);
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }

         else if(choice==3)
        {
            list1=create_list1();
            list2=create_list2();
            copy_list_recursive(list1);
            print_list(head);
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }

        else if(choice==4)
        {
            list1=create_list1();
            list2=create_list2();
            node *list3=merge_list(list1,list2);
            print_list(head);
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(choice==5)
        {
            list1=create_list1();
            display_reverse(head);
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(choice==6)
        {
            head=create_list1();
            display(head);
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }

    }
while(choice!=7);
}

void print_list(node *temp){

node *head;
temp=head;
while(temp!=NULL){
    printf("%p\t %d\t %p\n", &temp, temp->value, temp->next);
    temp=temp->next;
}
}


