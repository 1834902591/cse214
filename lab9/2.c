/*Implement an "insert back" function to insert an element at end (back) of the linked list.*/

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
node* insert_back(node *temp, int key);


int main(){
node *head=NULL;


printf("\n");
head=create_list();
print_list(head);
printf("\n");
head=insert_back(head,6);
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
node* insert_back(node *temp, int key){
if(temp==NULL){
node *new_head;
new_head=(node*)malloc(sizeof(node));
new_head->value=key;
new_head->next=NULL;
return new_head;
}
node *head=temp;
while(temp->next){
    temp=temp->next;
    }
    node *new_node;
new_node=(node*)malloc(sizeof(node));
new_node->value=key;
new_node->next=NULL;
temp->next=new_node;
return head;

}


