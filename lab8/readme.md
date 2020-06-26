***Implement a Delete Back function to delete the last (back) element of the linked list.(Check Underflow)***

```C
node* delete_back(node *temp){
if(temp){
node *head=temp, *last;
if(head->next!=NULL){
while(temp->next){
    last=temp;
    temp=temp->next;
}
free(temp);
last->next=NULL;
}
else{
    free(temp);
    head=NULL;
}

return head;
}
printf("Underflow Linked List\n");
return temp;
}
```
***Implement a Delete Front function to delete the front (front) element of the linked list.(Check Underflow)***

```C
node* delete_front(node *temp){
if(temp){
node *new_head=temp->next , *head;
if(head->next!=NULL){
free(temp);
return new_head;
}
else{
    free(temp);
    head=NULL;
}

return new_head;
}
printf("Underflow Linked List\n");
return temp;
}
```
***Implement a Delete Value function to delete a value (key) from the linked list.
 Take input the delete key from user(Check Underflow and Not found)***
 
 ```C
 node* delete_value(node *temp,int key){
if(temp){
node *head=temp, *prev;
while(temp){
if(temp->value==key){
   if(head==temp){
    head=temp->next;
    free(temp);
    return temp;
   }
   else{
    prev->next=temp->next;
    free(temp);
    return head;
   }
}
prev=temp;
temp=temp->next;
}

printf("Node not found\n");
return head;
}
printf("Underflow Linked List\n");
return temp;
}
```
***Implement a Delete At function to delete nth element from the linked list.
 Take input n from user(Check Underflow and index out of the range)[Let for the first element n=1]***
 
 ```C
node* delete_at(node *temp,int key){
if(temp){
node *head=temp, *prev, *next;
int i=1;
if(key>4  || key<1){
        printf("Invalid Index\n");
        return head;
        }
if(key!=1){
   while(i<key && temp){
    prev=temp;
    temp=temp->next;
    i++;
   }
   if(temp==NULL && i<key){
    printf("Invalid Index\n");
    return head;
   }
prev->next=temp->next;
free(temp);
}
else{
    head=temp->next;
    free(temp);
}
return head;
}
printf("Underflow Linked List\n");
return temp;
}
```
***Implement a Clear function to delete all the element of the linked list.***

```C
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
```

 




