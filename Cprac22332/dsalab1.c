#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *prev, *next,*ptr;
};
struct node* start = NULL;

void print()
{
    if (start == NULL) {
        printf("\nList is empty\n");
        return;
    }
    struct node* temp;
    for(temp=start;temp!=NULL;temp=temp->next)
    {
        printf("| %d ",temp->info);
        printf(" |-> ");
    }
    printf(" X ");
}

void insertAtFront()
{
    int data;
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter number to be inserted: ");
    scanf("%d", &data);
    temp->info = data;
    temp->prev = NULL;
    temp->next = start;
    start = temp;
}

void insertAtEnd()
{
    int data;
    struct node *temp, *trav;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;
    printf("\nEnter number to be inserted: ");
    scanf("%d", &data);
    temp->info = data;
    temp->next = NULL;
    trav = start;

    if (start == NULL) 
    {
        start = temp;
    }

    else 
    {
        while (trav->next != NULL)
        trav = trav->next;
        temp->prev = trav;
        trav->next = temp;
    }
}
 

void insert()
{
    int data, pos, i = 1;
    struct node *temp, *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->next = NULL;
    newnode->prev = NULL;

    printf("\nEnter position : ");
    scanf("%d", &pos);
    printf("\nEnter number to be inserted: ");
    scanf("%d", &data);
    newnode->info = data;
    temp = start;

    if (start == NULL) 
    {
        start = newnode;
        newnode->prev = NULL;
        newnode->next = NULL;
    }
 
    else if (pos == 1) 
    {
        newnode->next = start;
        newnode->next->prev = newnode;
        newnode->prev = NULL;
        start = newnode;
    }

    else 
    {
        while (i < pos - 1) 
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = newnode;
        temp->next->prev = newnode;
    }
}

void delete()
{
    int pos, i = 1;
    struct node *temp, *position;
    temp = start;

    if (start == NULL)
        printf("\nList is empty\n");
 
    else 
    {
        printf("\nEnter position : ");
        scanf("%d", &pos);

        if (pos == 1) 
        {
            position = start;
            start = start->next;
            if (start != NULL) 
            {
                start->prev = NULL;
            }
            free(position);
            return;
        }

        while (i < pos - 1) 
        {
            temp = temp->next;
            i++;
        }
        position = temp->next;
        if (position->next != NULL)
            position->next->prev = temp;
        temp->next = position->next;
        free(position);
    }
}
 
int main()
{
    int choice;
    printf("     DOUBLY LINKED LIST\n");
    while (1) {
 
        printf("\n\t1  Print\n");
        printf("\t2  Insert at front\n");
        printf("\t3  Insert at end\n");
        printf("\t4  Insert at any position\n");
        printf("\t5  Delete at any position\n");
        printf("\t6  Exit\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);
 
        switch (choice) 
        {
        case 1:
            print();
            break;
        case 2:
            insertAtFront();
            break;
        case 3:
            insertAtEnd();
            break;
        case 4:
            insert();
            break;
        case 5:
            delete();
            break;
        case 6:
            exit(1);
            break;
        default:
            printf("Incorrect Choice. Try Again \n");
            continue;
        }
    }
    return 0;
}