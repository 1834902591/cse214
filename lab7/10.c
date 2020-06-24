/*Copy a linked list into another list with a recursion function .
  Display both list before and after copy.*/




#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node{
int value;
node *next;
};

void print_list(node *temp);
node *create_list();
node* copy_list_recursive(node *list1);

int main(){
node *head=NULL;
node *list2=NULL;

head=create_list();
print_list(head);
printf("\n");
 list2=copy_list_recursive(head);
 print_list(list2);

return 0;
}

node* create_list(){

node *a,*b,*c,*d;
node *head;

a=(node*)malloc(sizeof(node));
b=(node*)malloc(sizeof(node));
c=(node*)malloc(sizeof(node));
d=(node*)malloc(sizeof(node));

head=a;

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

void print_list(node *temp){

node *head;
temp=head;
while(temp!=NULL){
    printf("%p\t %d\t %p\n", &temp, temp->value, temp->next);
    temp=temp->next;
}
}
node* copy_list_recursive(node *list1){
 if(list1 == NULL)
    {
        return NULL;
    }
    node* temp = (node*)malloc(sizeof(node));
    temp -> value = list1 -> value;
    temp -> next = copy_list_recursive(list1 -> next);


    return temp;
}
