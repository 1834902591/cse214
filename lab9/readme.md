***Implement an "insert front" function to insert an element at the beginning (front) linked list.***

```C
node* insert_front(node *temp, int key){
node *new_head;
new_head=(node*)malloc(sizeof(node));
new_head->value=key;
new_head->next=temp;
return new_head;
}
```
***Implement an "insert back" function to insert an element at end (back) of the linked list.***

```C
node* insert_back(node *temp, int key){
if(temp==NULL){
node *new_head;
new_head=(node*)malloc(sizeof(node));
new_head->value=key;
new_head->next=NULL;
return new_head;
}
node *head=temp;
while(temp->next){
    temp=temp->next;
    }
    node *new_node;
new_node=(node*)malloc(sizeof(node));
new_node->value=key;
new_node->next=NULL;
temp->next=new_node;
return head;
}
```
***Implement an "insert at" function to insert an element at nth index of the linked list.
   Take input n And value from user.(Check index out of range)[Let, for the first element n=1]***
   
   ```C
 node* insert_at(node *temp, int key, int value){
node *prev, *head=temp, *new_node;
int n=1;
if(key<1 || key>4){
    printf("index out of  range\n");
    return temp;
}
if(key==1){
new_node=(node*)malloc(sizeof(node));
new_node->value=value;
new_node->next=temp;
return new_node;
}

while(temp){
prev=temp;
if(n==key){
new_node=(node*)malloc(sizeof(node));
new_node->value=value;
new_node->next=temp->next;
prev->next=new_node;
return head;
}
n++;
temp=temp->next;
}
printf("Invalid Index\n");
return head;
}
```
***Implement an "insert after" function to insert an element after a node with a value key of the linked list.Take input key  And new node value from user.(Check index out of range)***

```C
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
```
***Implement an "insert before" function to insert an element after a node with a value key of the linked list.Take input key  And new node value from user.(Check index out of range)***

```C
node* insert_before(node *temp, int key, int value){
    node *prev, *head = temp;
    int i = 0;
    int j = 0;
    while(temp){
        if(temp->value == key){
            if(temp == head){
                node *new_node = (node*) malloc(sizeof(node*)) ;
                new_node->value = value;
                new_node->next = temp;
                i++;
                return new_node;
            }
            else
            {
                node *new_node = (node*) malloc(sizeof(node*));
                new_node->value = value;
                new_node->next = temp;
                prev->next = new_node;
                j++;
                return head;
            }
        }
        prev = temp;
        temp = temp->next;
    }
    if(i < 1 || i > 4 || j < 1 || j > 4){
        printf("Index out of range\n");
        printf("Element Not Found\n");
    }
    else
        printf("Element Not Found\n");
    return head;
}
```


