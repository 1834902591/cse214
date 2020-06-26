/**/


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
node* delete_back(node *temp);


int main(){
node *head=NULL;


printf("\n");
head=create_list();
print_list(head);
printf("\n");
head=delete_back(head);
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
node* delete_back(node *temp){
if(temp){
node *head=temp, *last;
if(head->next!=NULL){
while(temp->next){
    last=temp;
    temp=temp->next;
}
free(temp);
last->next=NULL;
}
else{
    free(temp);
    head=NULL;
}

return head;
}
printf("Underflow Linked List\n");
return temp;
}
