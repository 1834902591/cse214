***DOUBLE WAY NON-CIRCULAR LINKED LIST***

**INTRODUCTION:**

*A doubly linked list is a data structure that consists of a set of sequentially linked records called nodes. A doubly linked list contains an extra pointer, typically called previous, together with the next pointer and data. A doubly list can be circular or non-circular.
In non-circular doubly linked list, the head previous and the last next both will always points to the NULL. This list can be traversed in both direction.   
Here I implemented some following functions for non-circular doubly linked list:
1. Menu ()
2. Display ()
3. Empty ()
4. Size ()
5. Front ()
6. Back ()
7. Push Front ()
8. Push Back ()
9. Pop Front ()
10. Pop Back ()
11. Clear ()*


**USES:**

*Doubly linked list is one of the important data structures. Here some applications of doubly linked list is given below:-
1. Doubly linked list can be used in navigation system where both front and back navigation is required.
2. It is used to represent various state of a game like: rankings, deck of cards etc.
3. It is used by browsers to implement back and forward button for visited web pages.
4. It is used for Undo-Redo functionality in MS Word or Photoshop.*


**CODE:**

***Display Function:***
```C
void display(node *temp)
{
    node *new_node;
    printf("Doubly Linked List: ");
    new_node = head;
    if(new_node==NULL)
    {
        printf("\nLIST EMPTY\n");
    }
    while(new_node != NULL)
    {
        printf("%d ",new_node->data);
        new_node=new_node->next;
    }
}
```
***Push Front Function:***
```C
void push_front()
{
    node *new_node;
    int item;
    new_node = (node *) malloc(sizeof(node));
    if(new_node == NULL)
    {
        printf("OVERFLOW");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }
    else
    {
        printf("Input Value : ");
        scanf("%d",&item);

        if(head==NULL)
        {
            new_node->next = NULL;
            new_node->prev=NULL;
            new_node->data=item;
            head=new_node;
        }
        else
        {
            new_node->data=item;
            new_node->prev=NULL;
            new_node->next = head;
            head->prev=new_node;
            head=new_node;
        }
        printf("Node Inserted\n");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }

}
```
***Push Back Function:***
```C
void push_back()
{
    node *new_node,*temp;
    int item;
    new_node = (node *) malloc(sizeof(node));
    if(new_node == NULL)
    {
        printf("OVERFLOW");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }
    else
    {
        printf("Input Value: ");
        scanf("%d",&item);
        new_node->data=item;
        if(head == NULL)
        {
            new_node->next = NULL;
            new_node->prev = NULL;
            head = new_node;
        }
        else
        {
            temp = head;
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
            new_node ->prev=temp;
            new_node->next = NULL;
        }

    }
    printf("Node Inserted\n");
    getchar();
    printf("\nPress Enter to Continue");
    getchar();
}
```
***Pop Front Function:***
```C
void pop_front()
{
    node *new_node;
    if(head == NULL)
    {
        printf("UNDERFLOW");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("Node Deleted\n");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }
    else
    {
        new_node = head;
        head = head -> next;
        head -> prev = NULL;
        free(new_node);
        printf("Node Deleted\n");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }

}
```
***Pop Back Function:***
```C
void pop_back()
{
    node *new_node=head, *prev;
    if(head == NULL)
    {
        printf("UNDERFLOW");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("Node Deleted\n");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }
    else
    {
        while(new_node->next!=NULL)
        {
            prev=new_node;
            new_node=new_node->next;
        }
        prev->next=NULL;
        free(new_node);
        printf(" Node Deleted\n");
        getchar();
        printf("\nPress Enter to Continue");
        getchar();
    }
}
```
***Empty Function:***
```C
void empty(node *temp){
node *head=NULL;
if(temp==NULL){
    printf("LIST EMPTY\n");
}
else
    printf("LIST ISN'T EMPTY\n");
}
```
***Size Function:***
```C
void size(node *temp){
node *head=NULL;
int count=0;
while(temp!=NULL){
    temp=temp->next;
    count++;
}
printf("Size:%d\n",count);
}
```
***Delete Full List Function:**
```C
void clear(){
node *all_delete;
node *temp=head;
while(temp!=NULL){
    all_delete=temp;
    temp=temp->next;
    free(all_delete);
}
}
```
***Front Function:***
```C
int front(node *temp){
if(temp!=NULL){
    while(temp->next){
        temp=temp->next;
    }
    return temp->data;
}
else
    printf("LIST EMPTY\n");
}
```
***Back Function:***
```C
int back(node *temp){
node *head=NULL;
if(temp!=NULL){
    while(temp->next){
        temp=temp->next;
    }
    return temp->data;
}
else
    printf("LIST EMPTY\n");
}
```
