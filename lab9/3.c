/*Implement an "insert at" function to insert an element at nth index of the linked list.
   Take input n And value from user.(Check index out of range)[Let, for the first element n=1]*/

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
node* insert_at(node *temp, int key, int value);


int main(){
node *head=NULL;
int key, value;

printf("\n");
head=create_list();
print_list(head);
printf("\n");
printf("Enter the key:");
scanf("%d", &key);
printf("Enter the Value:");
scanf("%d", &value);
head=insert_at(head, key, value);
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
node* insert_at(node *temp, int key, int value){
node *prev, *head=temp, *new_node;
int n=1;
if(key<1 || key>4){
    printf("index out of  range\n");
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
