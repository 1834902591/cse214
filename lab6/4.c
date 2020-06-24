/* Use dynamic memory allocation to create three elements of the linked list
   and display (only value)the complete linked list using a function.(check empty list)*/


#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node{
int value;
node *next;
};

void display_value(node *temp);
int is_empty(node *temp);


int main(){

node *a,*b,*c;
node *head=NULL;
node *temp;

printf("%d\n",is_empty(head));

printf("\n");

a=(node *)malloc(sizeof(node));
b=(node *)malloc(sizeof(node));
c=(node *)malloc(sizeof(node));

   head=a;

 a->value=1;
 a->next=b;

 b->value=2;
 b->next=c;

 c->value=3;
 c->next=NULL;

temp=head;

display_value(head);
printf("\n");
printf("%d\n",is_empty(head));


return 0;
}


void display_value(node *temp){
    if(temp==NULL){
        return;
    }
while(temp!=NULL){
    printf("%d\n",temp->value);
    temp=temp->next;
}
}
int is_empty(node *temp){
if (temp==NULL){
    return 1;
}
return 0;
}
