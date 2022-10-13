#include<stdio.h>
#include<stdlib.h>
struct node
    {
       int data;
       struct node * link;
    };
    //=====================================================================================
   /* void Ll_Traversal(struct node *head)
{
    if (head == NULL)

    {
        printf("There is no element in the SLL\n");
    }

    int count = 0;
    struct node *countr = NULL;
    countr = head;
    while (countr != NULL)
    {
        count++;
        countr = countr->link;
    }
    printf("The number of elements in the SLL is:%d\n", count);
}
    //----------------------------------------------------------------------====----------------------------------
    void SLL_printng(struct node *head)
{
    if (head == NULL)
    {
        printf("There are no elements in the SLL\n");
    }
    struct node *printer;
    printer = head;
    printf("The elements are:");
    while (printer != NULL)
    {
        printf("\n %d\n", printer->data);
        printer = printer->link;
    }
}*/
//-----------------------------------------------------------------------=====++++---------------------------------------------
int main()
{
    
    struct node*head=malloc(sizeof(struct node));
    struct node*newnode=malloc(sizeof(struct node));
    struct node*temp=malloc(sizeof(struct node));
    head=NULL;
    temp=NULL;
    int choice=0,count=0;
   /* while (choice==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
    }*/
    printf("Enetr the data: ");
    scanf("%d",&head->data);
    head->link=newnode;
   // newnode->link=temp;
    
   /* if (head==0)
    {
       head=temp=newnode;
    }
    else
    {
        temp->link=newnode;
        temp=newnode;
    }*/
   // label:
    printf("Do u wish to continue?\nEnetr 1 for yes\n 2 for no\n");
    scanf("%d",&choice);
    if (choice==1)
    {   
        newnode=malloc(sizeof(struct node));
        

        printf("Enter new value: ");
        scanf("%d",&newnode->data);
        newnode->link=NULL;
        printf("\n");
         
         
    }
     if (choice==2)
    {   
        //Ll_Traversal(head);
       // SLL_printng(head);
        if (head == NULL)
    {
        printf("There are no elements in the SLL\n");
    }
    int count = 0;
    struct node *countr = NULL;
    countr = head;
    while (countr != NULL)
    {
        count++;
        countr = countr->link;
    }
    printf("The number of elements in the SLL is:%d\n", count);
    struct node *printer;
    printer = head;
    printf("The elements are:");
    while (printer != NULL)
    {
        printf("\n %d\n", printer->data);
        printer = printer->link;
    }

    }
    
    //goto label;
    
    
   
   
    printf("Teh end");
    
}