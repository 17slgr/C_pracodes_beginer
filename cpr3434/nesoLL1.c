#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};

int main(int argc, char const *argv[])
{
    struct node* head;
    struct node* current;
    struct node* current2;
    head=(struct node *) malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    current=(struct node *) malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link=current;

     current2=(struct node *) malloc(sizeof(struct node));
    current2->data=3;
    current2->link=NULL;
    current->link=current2;
    printf("%d\n",head->data);
    printf("%d\n",current->data);
    printf("%d\n",current2->data);

    return 0;
}
