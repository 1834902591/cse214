/* Define a function to merge two sorted linked list into a sorted linked list
    Display all the list before and after merging.(consider two linked list are already sorted.) */




#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node{
int value;
node *next;
};

void print_list(node *temp);
node* create_list1();
node* create_list2();
node* merge_list(node *list1, node *list2);


int main(){
node *list1=NULL;
node *list2=NULL;
node *list3=NULL;

list1=create_list1();
print_list(list1);

list2=create_list2();
print_list(list2);

list3=merge_list(list1,list2);
print_list(list3);
return 0;
}

node* create_list1(){

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

node* create_list2(){

node *a,*b,*c,*d;
node *head;

w=(node*)malloc(sizeof(node));
x=(node*)malloc(sizeof(node));
y=(node*)malloc(sizeof(node));
z=(node*)malloc(sizeof(node));

head=w;

w->value=5;
w->next=x;
x->value=6;
x->next=y;
y->value=7;
y->next=z;
z->value=8;
z->next=NULL;

return w;
}

void print_list(node *temp){

node *head;
temp=head;
while(temp!=NULL){
    printf("%p\t %d\t %p\n", &temp, temp->value, temp->next);
    temp=temp->next;
}
}

node* merge_list(node *list1, node *list2){
    node *head, *temp, *new_node;
    head = create_list1(list1)
    temp = head;
    while(temp -> next){
        temp = temp->next;
    }
    temp->next = create_list2(list2);

    return head;
}
