

#include<stdio.h>



typedef struct Node node;

struct Node{
int value;
node *next;
};
void display_value(node *temp);


int main(){

node a,b,c;
node *head;
node *temp;

 head=&a;

 a.value=1;
 a.next=&b;

 b.value=2;
 b.next=&c;

 c.value=3;
 c.next=NULL;

temp=head;
while(temp!=NULL){
    printf("%p\t %d\t %p\n", &temp, temp->value, temp->next);
    temp=temp->next;
}
printf("\n");
display_value(head);

return 0;
}


void display_value(node *temp){
if (temp==NULL){
    return;
}
while(temp!=NULL){
        printf("%d\n", temp->value);
    temp=temp->next;
}
}
