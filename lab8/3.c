/* Implement a Delete Value function to delete a value (key) from the linked list.
 Take input the delete key from user(Check Underflow and Not found)*/


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
node* delete_value(node *temp, int key);


int main(){
node *head=NULL;
int key;
printf("Enter the number:\n");
scanf("%d", &key);

printf("\n");
head=create_list();
print_list(head);
printf("\n");

head=delete_value(head,key);
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
node* delete_value(node *temp,int key){
if(temp){
node *head=temp, *prev;
while(temp){
if(temp->value==key){
   if(head==temp){
    head=temp->next;
    free(temp);
    return temp;
   }
   else{
    prev->next=temp->next;
    free(temp);
    return head;
   }
}
prev=temp;
temp=temp->next;
}

printf("Node not found\n");
//return head;
}
printf("Underflow Linked List\n");
return temp;
}


