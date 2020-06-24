***Define a Structure for Linked List Node,Declare three variable,
   Assign value and next address in those variable.print the variable
   address,value and next variable address.( Don't use any function,"typedef"
   keyword and dynamic memory allocation.)***
   
 ```C
struct Node{
int value;
struct Node *next;
};

int main(){
struct Node a,b,c;
struct Node *head;
struct Node *temp;
head=&a;
 a.value=1;
 a.next=&b;
 b.value=2;
 b.next=&c;
 c.value=3;
 c.next=NULL;

 temp=head;
 while(temp!=NULL){
    printf("%p\t %d\t %p\n",&temp, temp->value,temp->next);
    temp=temp->next;
 }

return 0;
```
***Define a function to print single node(address,value & next address)of
   the  Linked list and do the same problem as 1 (use typedef keyword,Don't use DMA).***
   
```C
void print_node(node *p){
printf("%p\t %d\t %p\n",&p, p->value, p->next);
}
```
***Define a function to display (only value for each node)the complete Linked List
    and do the same as problem 1.(Don't use DMA)***
    
```C
void display_value(node *temp){
if(temp==NULL){
    return;
}
while(temp!=NULL){
    printf("%d\n",temp->value);
    temp=temp->next;
}
}
```
***Use dynamic memory allocation to create three elements of the linked list
   and display (only value)the complete linked list using a function.(check empty list)*
**

```C
 int main(){
   node *a,*b,*c;
   node *head=NULL;
   node *temp;

   printf("%d\n",is_empty(head));

   printf("\n");

   a=(node*)malloc(sizeof(node));
   b=(node*)malloc(sizeof(node));
   c=(node*)malloc(sizeof(node));
         head=a;
         a->value=1;
         a->next=b;
         b->value=2;
         b->next=c;
         c->value=3;
         c->next=NULL;

    temp=head;

    display_value(head);
    printf("\n");
    printf("%d\n",is_empty(head));

   return 0;
   }
   int is_empty(node *temp){
   if(temp==NULL){
    return 1;
   }
   return 0;
   }

void display_value(node *temp){
if(temp==NULL){
    return;
}
while(temp!=NULL){
    printf("%d\n",temp->value);
    temp=temp->next;
}
}
```
***Define a function to display the complete linked list
   with a recursive function using problem 4.***
   
```C
void display_complete_linkedlist(node *temp){
if(temp!=NULL){


while(temp!=NULL){
    printf("%d\n",temp->value);
    temp=temp->next;
}
}
else
{
    is_empty(temp);
}
```
***/* Define a function to display the complete linked list in a reverse order
   with a recursive function using problem 4.***
   
 ```C
oid display_complete_linkedlist(node *temp){
if(temp!=NULL){


while(temp!=NULL){
    printf("%d\n",temp->value);
    temp=temp->next;
}
}
else
{
    is_empty(temp);
}
void display_reverse_linkedlist(node *temp){
if(temp==NULL){
    return;
}
else{
display_reverse_linkedlist(temp->next);
printf("%d\n",temp->value);
} 
```





