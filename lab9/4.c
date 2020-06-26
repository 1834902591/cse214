/*Implement an "insert after" function to insert an element after a node with a value key of the linked list.
   Take input key  And new node value from user.(Check index out of range)*/

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
node* insert_after(node *temp, int key, int value);


int main(){
node *head=NULL;
int key, value;

printf("\n");
head=create_list();
print_list(head);
printf("\n");
printf("Key:");
scanf("%d", &key);
printf("Value:");
scanf("%d", &value);
head=insert_after(head, key, value);
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
node* insert_after(node *temp, int key, int value)
{
    node *head = temp;
    int i = 0;
    while(temp){
        if(temp->value == key){
            node *new_node = (node*) malloc(sizeof (node) );
            new_node->value = value;
            new_node->next = temp->next;
            temp->next = new_node;
            i++;
            return head;
        }
        temp = temp->next;
    }
    if(i<1 || i>4){
        printf("Index out of range\n");
        printf("Element Not Found\n");
    }
    else
        printf("Element Not Found\n");
    return head;
}
