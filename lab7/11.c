/* Define a function to merge two linked list. Display all the
 list before and after merging.*/


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
node* copy_list(node *list1);

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

w->value=10;
w->next=x;
x->value=20;
x->next=y;
y->value=30;
y->next=z;
z->value=40;
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

node* copy_list(node *list1){
 node *head2, *temp;
    temp = (node*)malloc(sizeof(node)) ;
    temp -> value = list1-> value;
    temp -> next = NULL;
    head2 = temp;
    list1 = list1 -> next;
    while (list1){
        temp->next = (node*)malloc(sizeof(node)) ;
        temp = temp -> next;
        temp -> value = list1 -> value;
        temp -> next = NULL;
        list1 = list1->next;
    }
    return head2;
}
node* merge_list(node *list1, node *list2){
    node *head, *temp, *new_node;
    head = copy_list(list1);
    temp = head;
    while(temp -> next){
        temp = temp->next;
    }
    temp->next = copy_list(list2);

    return head;
}
