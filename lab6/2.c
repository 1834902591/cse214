/* Define a function to print single node(address,value & next address)of
   the  Linked list and do the same problem as 1 (use typedef keyword,Don't use DMA).*/



#include<stdio.h>

typedef struct Node node;
struct Node{
int value;
node *next;
};
void print_node(node *p);

int main(){

node a,b,c;
node *head;
node *temp;

head=&a;

 a.value=1;
 a.next=&b;

 b.value=2;
 b.next=&c;

 c.value=3  ;
 c.next=NULL;

 temp=head;
 while(temp!=NULL){
    printf("%p\t %d\t %p\n", &temp, temp->value, temp->next);
    temp=temp->next;
 }

return 0;
}


void print_node(node *p){
printf("%p\t %d\t %p\n", &p, p->value, p->next);
}
