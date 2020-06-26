/* Implement a Delete Front function to delete the front (front) element of the linked list.(Check Underflow)*/


#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node{
int value;
node *next;
};

void print_list(node *temp);
node *create_list();
int empty_list(node *temp);
node* delete_front(node *temp);


int main(){
node *head=NULL;


printf("\n");
head=create_list();
print_list(head);
printf("\n");
head=delete_front(head);
print_list(head);


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
int empty_list(node *temp){
if(temp==NULL){
    printf("LIST EMPTY\n");
}
return 0;
}
node* delete_front(node *temp){
if(temp){
node *new_head=temp->next , *head;
if(head->next!=NULL){
free(temp);
return new_head;
}
else{
    free(temp);
    head=NULL;
}

return new_head;
}
printf("Underflow Linked List\n");
return temp;
}

