/* Implement a Clear function to delete all the element of the linked list.*/


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
node* clear(node *temp);


int main(){
node *head=NULL;


printf("\n");
head=create_list();
printf("\n");
head=clear(head);
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
node* clear(node *temp){
if(temp){
node *to_delete, *temp;
while(temp){
 to_delete=temp;
temp=temp->next;
free(to_delete);
}
return NULL;
}
else{
    printf("Underflow Linked List\n");
     return NULL;
}
}


