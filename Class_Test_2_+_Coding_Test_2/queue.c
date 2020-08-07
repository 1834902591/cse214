#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node{
int data;
node *next;

};
void menu();
void display(node *temp);
void empty(node *temp);
void size(node *temp);
void top(node *temp);
node *push(node *temp, int value);
node *pop(node *temp);



int main (){
menu();
return 0;
}
void menu(){
node *head=NULL;
int n, choice,First_element;
do{
    system("cls");
            printf("\nMain Menu\n");
        printf("\nQueue ...\n");
        printf("\n===============================================\n");
        printf("1. Empty\n");
        printf("2. Size\n");
        printf("3. Top\n");
        printf("4. Pop\n");
        printf("5. Push\n");
        printf("6. Display\n");
        printf("6. Exit\n");
        printf("\nEnter your choice:\n");
        scanf("\n%d",&choice);

        if(choice<=0 || choice>6){
           printf("Invalid Input.Insert between 1 to 6\n");
        }
        else if(choice==1){
               empty(head);
               getchar();
               printf("Press to continue.");
               getchar();
        }
        else if(choice==2){
               size(head);
               getchar();
               printf("Press to continue.");
               getchar();
        }
        else if(choice==3){
             top(head);
               getchar();
               printf("Press to continue.");
               getchar();
        }
        else if(choice==4){
            head= pop(head);
               getchar();
               printf("Press to continue.");
               getchar();
        }
        else if(choice==5){
         printf("Enter element:");
         scanf("%d", &n);
         head=push(head,n);
         printf("Value inserted\n");
               getchar();
               printf("Press to continue.");
               getchar();
        }
       else if(choice==6){
               display(head);
               getchar();
               printf("Press to continue.");
               getchar();
        }

    }
    while(choice != 7);


}





}

void display(node *temp){
if(temp==NULL){
    printf("Queue is Empty\n");
    return;
}
while(temp!=NULL){
    printf("%d\n",temp->data);
    temp=temp->next;
}
}

void empty(node *temp){
if(temp==NUll){
    printf("Queue is Empty\n");
}
else{
    printf("Queue is not Empty\n");
}

}
void size(node *temp){
int count =0;
while(temp!=NULL){
    temp=temp->next;
    count++;
}
printf("Size:%d\n",count);
}
void top(node *temp){
if(temp!=NULL){
    printf("Top:%d\n",temp->data);
}
else{
    printf("No Top Value\n");
}
}

node *push(node *temp, int value){
node *head=temp, *new_node;
if(temp==NULL){
    node *new_head;
    new_head=(node *)malloc(sizeof(node));
    new_head->value=value;
    new_head->next=NULL;
    return new_head;
}
while(temp->next){
    temp=temp->next;
    new_node=(node *)malloc(sizeof(node));
    new_node->value=value;
    new_node->next=NULL;
    return head;
}
}
node *pop(node *temp){
if(temp!=NULL){
    node *newhead=temp->next;
    printf("Deleted Value:%d\n",temp->data);
    free(temp);
    return newhead;
}
printf("Queue is now Empty.\n");
return temp;
}
