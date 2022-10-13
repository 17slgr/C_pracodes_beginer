#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void Ll_Traversal(struct node *head)
{
    int count = 0;
    if (head == NULL)

    {
        printf("There is no element in the SLL\n");
    }

    struct node *countr = NULL;
    countr = head;
    while (countr != NULL)
    {
        count++;
        countr = countr->link;
    }
    printf("The number of elements in the SLL is:%d\n", count);
}

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
}
int main(int argc, char const *argv[])
{
    /* struct node *head=malloc(sizeof(struct node));
    struct node *second=malloc(sizeof(struct node));
    struct node *third=malloc(sizeof(struct node));
    struct node *fourth=malloc(sizeof(struct node));
    //head = (struct node *)malloc(sizeof(struct node));

   

    head->data = 12;
    head->link = second;
    second->data = 13;
    second->link = third;
    third->data = 45;
    third->link = fourth;
    fourth->data = 65;
    fourth->link = NULL;*/
    struct node *head = malloc(sizeof(struct node));
    struct node *temp = malloc(sizeof(struct node));
    //struct node * tempo =malloc(sizeof(struct node));
    //-------------------------first element------------------------
    printf("Enter the value of first element:");
    scanf("%d", &head->data);

    head->link = NULL;
    //-------------------------second element-------------------------
    printf("Enter the value of second element:");
    scanf("%d", &temp->data);

    temp->link = NULL;
    head->link = temp;
    //---------------------------third ele temp=malloc(sizeof(struct node));
    temp = malloc(sizeof(struct node));
    printf("Enter the value of third element:");
    scanf("%d", &temp->data);

    temp->link = NULL;
    head->link->link = temp;

    Ll_Traversal(head);
    SLL_printng(head);
    printf("----------------------------------------------------------------------------\nhekk\n");

    return 0;
}
