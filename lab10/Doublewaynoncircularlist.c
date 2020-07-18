#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head;
void headoflist();
void tailoflist();
void insert_list();
void delete_list();
void push_front();
void push_back();
void pop_front();
void pop_back();
void clear();
void operations_list();
void empty ();
int size();
int front();
int back();

void display_list();


void main ()
{
int choice =0 ;
    do

    {


        printf("\nMain Menu\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("1. Display\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Other Operations\n");
        printf("5. Head\n");
        printf("6. Tail\n");
        printf("7.  Close\n");
        printf("\nEnter your choice:\n");
        scanf("\n%d",&choice);

        if(choice<=0 || choice>7){
           printf("Invalid Input.Insert between 1 to 5\n");
        }
        else if(choice==1){
                printf("Double Way Non-circular Linked List:");
            display_list();
        }
        else if(choice==2){
        insert_list();
        }
        else if(choice==3){
            delete_list();
        }
        else if(choice==4){
            operations_list();
        }
        else if(choice==5){
            headoflist();
        }
       else if(choice==6){
            tailoflist();
        }
    }
    while(choice != 7);
return 0;
}


void insert_list(){
int choice;
do{
    system("cls");
    printf("Types of Insertation\n");
    printf("1.Front\n");
    printf("2.Back\n");
    printf("3. Back to Menu\n");
    scanf("%d", &choice);
     if(choice<=0 || choice>=3){
           printf("Invalid Input.Insert between 1 or 2\n");
        }
        else if(choice==1){
        return push_front();
        }
        else if(choice==2){
        return push_back();
        }
    }
    while(choice!=3);

}

void push_front()
{
   struct node *temp;
   int item;
   temp = (struct node *)malloc(sizeof(struct node));
   if(temp == NULL)
   {
       printf("\nOVERFLOW");
   }
   else
   {
    printf("Enter value: ");
    scanf("%d",&item);

   if(head==NULL)
   {
       temp->next = NULL;
       temp->prev=NULL;
       temp->data=item;
       head=temp;
   }
   else
   {
       temp->data=item;
       temp->prev=NULL;
       temp->next = head;
       head->prev=temp;
       head=temp;
   }
   printf("\nNode inserted\n");
}

}
void push_back()
{
   struct node *newnode,*temp;
   int item;
   newnode = (struct node *) malloc(sizeof(struct node));
   if(newnode == NULL)
   {
       printf("\nOVERFLOW");
   }
   else
   {
       printf("Enter value: ");
       scanf("%d",&item);
        newnode->data=item;
       if(head == NULL)
       {
           newnode->next = NULL;
           newnode->prev = NULL;
           head = newnode;
       }
       else
       {
          temp = head;
          while(temp->next!=NULL)
          {
              temp = temp->next;
          }
          temp->next = newnode;
          newnode ->prev=temp;
          newnode->next = NULL;
          }

       }
     printf("\nnode inserted\n");
    }


 void delete_list(){
int choice;
struct node *temp, *to_delete;

do{
    system("cls");
    printf("Types of Deletion\n");
    printf("1.Front\n");
    printf("2.Back\n");
    printf("3.Clear\n");
    printf("4. Back to Menu\n");
    scanf("%d", &choice);
     if(choice<=0 || choice>=4){
           printf("Invalid Input.Insert between 1 or 2\n");
        }
        else if(choice==1){
        return pop_front();
        }
        else if(choice==2){
        return pop_back();
        }
        else if(choice==3){
            return clear();
        }
    }
    while(choice!=3);

}
void pop_front()
{
    struct node *newnode;
    if(head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nnode deleted\n");
    }
    else
    {
        newnode= head;
        head = head -> next;
        head -> prev = NULL;
        free(newnode);
        printf("\nnode deleted\n");
    }

}
void pop_back()
{
    struct node *newnode;
    if(head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nnode deleted\n");
    }
    else
    {
        newnode = head;
        if(newnode->next != NULL)
        {
            newnode = newnode-> next;
        }
        newnode-> prev -> next = NULL;
        free(newnode);
        printf("\nnode deleted\n");
    }
}

void clear(){
    struct node *temp;
if(temp){
 struct node *to_delete, *temp;
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


void operations_list(){
int count;
int data;
struct node *temp;
int choice =0;
    do
    {

        printf("1. Empty Check \n");
        printf("2. size\n");
        printf("3. Front\n");
        printf("4. Back\n");
        printf("5. Back to Menu\n");
        printf("\nEnter your choice:\n");
        scanf("\n%d",&choice);

        if(choice<=0 || choice>5){
           printf("Invalid Input.Insert between 1 to 5\n");
        }
        else if(choice==1){
           return empty_list();
        }
        else if(choice==2)
{
        printf("%d",size());
          return  size();
        }
       else if(choice==3){
            printf("%d",front());
             return front ();
        }
       else if(choice==4){
            printf("%d",back());
             return back ();
       }
    }
    while(choice != 5);

}


void empty_list(){
    struct node *head;
if(head==NULL)
    {
        printf("The list is empty\n");
    }
    else
    {
        printf("The list is not empty\n");
    }

}

 int size(){
     struct node *head;
 struct node *temp=head;
 int count;
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        int count=1;
        while(temp->next!=head)
        {
            count+=1;
            temp=temp->next;
        }
        printf("%d\n",count);
    }
 }




int front(){
    struct node *head;
    int data;
 if(head==NULL)
    {
        printf("There is no element");
    }
    else
    {
        printf("%d\n",head->data);
    }
}



int back(){
    struct node *temp, *head;
    int data;
if(head==NULL)
    {
        printf("There is no element");
    }
    else
    {
     struct node *temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        printf("%d\n",temp->data);
    }
}


void display_list()
{
    struct node *temp;
    printf("\n Displaying values...\n");
    temp= head;
    while(temp!= NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void headoflist(){
struct node *temp;
   int item;
   temp = (struct node *)malloc(sizeof(struct node));
   if(temp == NULL)
   {
       printf("\nOVERFLOW");
   }
   else
   {
    printf("Enter value: ");
    scanf("%d",&item);

   if(head==NULL)
   {
       temp->next = NULL;
       temp->prev=NULL;
       temp->data=item;
       head=temp;
   }
   else
   {
       temp->data=item;
       temp->prev=NULL;
       temp->next = head;
       head->prev=temp;
       head=temp;
   }
   printf("\nNode inserted\n");
}
}
void tailoflist(){

   struct node *newnode,*temp;
   int item;
   newnode = (struct node *) malloc(sizeof(struct node));
   if(newnode == NULL)
   {
       printf("\nOVERFLOW");
   }
   else
   {
       printf("Enter value: ");
       scanf("%d",&item);
        newnode->data=item;
       if(head == NULL)
       {
           newnode->next = NULL;
           newnode->prev = NULL;
           head = newnode;
       }
       else
       {
          temp = head;
          while(temp->next!=NULL)
          {
              temp = temp->next;
          }
          temp->next = newnode;
          newnode ->prev=temp;
          newnode->next = NULL;
          }

       }
    printf("\nnode inserted\n");

}





