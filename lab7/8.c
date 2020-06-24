/*Define a function to reverse the linked list using recursion.
   Display both list before and after reversing. */


#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node{
int value;
node *next;
};

void print_list(node *temp);
node *create_list();
void reverse_linkedlist(node *temp);

int main(){
node *head=NULL;

head=create_list();
print_list(head);
printf("\n");
reverse_linkedlist(head);
return 0;
}

node *create_list(){

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
    printf("%p\t %d\t %p\n", temp->value);
    temp=temp->next;
}
}
void reverse_linkedlist(node *temp){
if(temp==NULL){
    return ;
}
reverse_linkedlist(temp->next);
printf("%p\t %d\t %p\n",&temp,  temp->value, temp->next);
}
