#include<stdio.h>
#include<stdlib.h>


typedef struct Node node;
struct Node{
int data;
node *next;
node *prev;
};
node *head=NULL;
void menu();
void display(node *temp);
void push_front();
void push_back();
void pop_front();
void pop_back();
void empty(node *temp);
void size(node *temp);
int front(node *temp);
int back(node *temp);


int main(){
node *head=NULL;
menu();
return 0;
}
void menu(){
int choice;
    do
    {
        system("cls");
        printf("\nMain Menu\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("1. Display\n");
        printf("2. Empty\n");
        printf("3. Size\n");
        printf("4. Front\n");
        printf("5. Back\n");
        printf("6. Push Front\n");
        printf("7. Push Back\n");
        printf("8. Pop Front\n");
        printf("9. Pop Back\n");
        printf("10. Clear\n");
        printf("11. Close\n");
        printf("\n");
        printf("\nEnter your choice:\n");
        scanf("%d", &choice);

         if(choice<=0 || choice>11)
        {
            printf("Invalid Choice.\nPlease Insert Between 1 to 11\n");
            getchar();
            printf("\nPress Enter to Continue");
            getchar();

        }
        else if(choice==1)
        {
            printf("~~~~\n Doubly Non-Circular  Linked List.\n~~~~");
            display(head);
            getchar();
            printf("\n\nPress Enter to Continue");
            getchar();
        }
        else if(choice==2)
        {
            empty(head);
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(choice==3)
        {
            size(head);
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(choice==4)
        {
            printf("List Front: %d\n",front(head));
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(choice==5)
        {

            printf("List Back: %d\n",back(head));
            getchar();
            printf("\nPress Enter to Continue");
            getchar();
        }
        else if(choice==6)
        {
            push_front();
        }
        else if(choice==7)
        {
            push_back();
        }
        else if(choice==8)
        {
            pop_front();
        }
        else if(choice==9)
        {
            pop_back();
        }
        else if(choice==10)
        {
            clear();
            printf("Delete All Node From List");
            getchar();
            printf("\n\nPress Enter to Continue");
            getchar();
        }
    }
while(choice!=11);
}
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
void empty(node *temp){
node *head=NULL;
if(temp==NULL){
    printf("LIST EMPTY\n");
}
else
    printf("LIST ISN'T EMPTY\n");
}

void size(node *temp){
node *head=NULL;
int count=0;
while(temp!=NULL){
    temp=temp->next;
    count++;
}
printf("Size:%d\n",count);
}

void clear(){
node *all_delete;
node *temp=head;
while(temp!=NULL){
    all_delete=temp;
    temp=temp->next;
    free(all_delete);
}
}
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
