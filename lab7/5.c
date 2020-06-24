/*Define back function to display the last element of the linked list.*/


#include<stdio.h>
#include<stdlib.h>

typedef struct NOde node;
struct Node{
int value;
node *next;
};

void print_list(node *temp);
node *create_list();
int back(node *temp);



int main(){
node *head=NULL;


head=create_list();
print_list(head)
printf("BACK=%d\n",back(head));


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
         a->next=&b;
         b->value=2;
         b->next=&c;
         c->value=3;
         c->next=&d;
         d->value=4;
         d->next=NULL;
         return a;
}
void print_list(node *temp){
if(temp==NULL){
    return 1;
}
while(temp!=NULL){
    printf("%p\t %d\t %p\n",&temp, temp->value, temp->next);
    temp=temp->next;
}
}
int back(node *temp){
if (temp!=NULL){
        while(temp->next!=NULL){
            temp=temp->next;
        }
    return temp->value;
}
return 0;
}

