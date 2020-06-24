/* Define a function to display the complete linked list
   with a recursive function using problem 4.*/


#include<stdio.h>
#include<stdlib.h>


typedef struct Node node;
struct Node{
int value;
node *next;
};

int is_empty(node *temp);
void display_complete_linkedlist(node *temp);


int main(){

node *a,*b,*c;
   node *head=NULL;
   node *temp;

   printf("%d\n",is_empty(head));

   printf("\n");

   a=(node*)malloc(sizeof(node));
   b=(node*)malloc(sizeof(node));
   c=(node*)malloc(sizeof(node));
         head=a;
         a->value=1;
         a->next=b;
         b->value=2;
         b->next=c;
         c->value=3;
         c->next=NULL;

    temp=head;

display_complete_linkedlist(head)
    printf("\n");
    printf("%d\n",is_empty(head));

   return 0;
   }
int is_empty(node *temp){
   if(temp==NULL){
    return 1;
   }
   return 0;
   }

void display_complete_linkedlist(node *temp){
    if(temp==NULL){
     while(temp!=NULL){
    printf("%d\n",temp->value);
    temp=temp->next;
}
}
else{
    is_empty(temp);
}




