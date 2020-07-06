***Define a create function to declare a linked list with four node
     using DMA. print the complete linked list after calling the create function.***

```C

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
```
***DEfine an "empty" function to check whether the linked list is empty or not.***
```C
int empty_list(node *temp){
if(temp==NULL){
    printf("LIST EMPTY\n");
}
return 0;
}
```
***Define a "Size" function to find the size of the linked list.***
```C
int size(node *temp){
 int count =0;
 while (temp!=NULL){
    count++;
    temp=temp->next;
 }
return count;

}
```
***Define front function to display the first element of the linked list.***
```C
int front(node *temp){
if (temp!=NULL){
    return temp->value;
}
return -1;
}
```
***Define back function to display the last element of the linked list.***
```C
int back(node *temp){
if (temp!=NULL){
        while(temp->next!=NULL){
            temp=temp->next;
        }
    return temp->value;
}
return 0;
}
```
***Define a search function to find a key (take input from user).Print Found if the
   search key is foundin the linked list otherwise print not found.***
   ```C
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
```

***Define a function to reverse the linked list .(Don't use recursion)Display both list before
    after reversing.***
    
```C
   node* reverse_list(node* list1){
    node *first, *current, *temp;
    first = list1;
    current = list1->next;
    first->next = NULL;
    while(current)
    {
        temp = current->next;
        current->next = first;
        first = current;
        current = temp;
    }
    return first;
    }
 ```
***Copy a linked list into another linked list.
    Display both list before and after copy.(Don't use recursion)***
   
```C
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
  ```

***Copy a linked list into another list with a recursion function .
  Display both list before and after copy.*/

```C
node* copy_list_recursive(node *list1){
 if(list1 == NULL)
    {
        return NULL;
    }
    node* temp = (node*)malloc(sizeof(node));
    temp -> value = list1 -> value;
    temp -> next = copy_list_recursive(list1 -> next);


    return temp;
}
```
***Define a function to merge two linked list. Display all the
 list before and after merging.***

```C
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
 ```   
 ***Define a function to merge two sorted linked list into a sorted linked list
    Display all the list before and after merging.(consider two linked list are already sorted.) ***

 ```C 
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
```
    
