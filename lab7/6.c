/*Define a search function to find a key (take input from user).Print Found if the
   search key is foundin the linked list otherwise print not found.*/



#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node{
int value;
node *next;
};

void print_list(node *temp);
node *create_list();
int search(node *temp,int key);



int main(){
node *head=NULL;
int key;

head=create_list();
print_list(head);
printf("\n Enter element to search :");
scanf("%d", &key);
search( head,key);



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
if(temp==NULL){
    return 1;
}
while(temp!=NULL){
    printf("%p\t %d\t %p\n",&temp, temp->value, temp->next);
    temp=temp->next;
}
}
int search(node *temp,int key){
if (temp!=NULL){

        while(temp!=NULL){
                if(key==temp->value){
                    printf("FOUND");
                    break;
                }
              else {
            temp=temp->next;
              }
        }
    printf("NOT FOUND");
}
return 0;
}
