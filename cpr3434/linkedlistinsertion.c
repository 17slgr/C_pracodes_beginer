#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node*link;

};
void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->link;
    }
}
//case1
struct Node*insertAtFirst (struct Node*head,int data)
{
   struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
   ptr->link=head;
   ptr->data=data;
   return ptr;

}
//case2
struct Node*insertAtIndex (struct Node*head,int index,int data)
{
    struct Node*ptr =(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    int i=0;
    while (i!=index-1)
    {
       p=p->link;
       i++;
    }
    ptr->data=data;
    ptr->link=p->link;
    p->link=ptr;
    return head;

}
//case3
struct Node*insertAtend (struct Node*head,int data)
{
    struct Node*ptr =(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    ptr->data=data;
    
    while (p->link!=NULL)
    {
       p=p->link;
       
    }
    p->link=ptr;
    ptr->link=NULL;
   
    return head;

}
//case4
struct Node*insertAfteranode (struct Node*head,struct Node*prevnode,int data)

{
    struct Node*ptr =(struct Node*)malloc(sizeof(struct Node));
   ptr->data=data;
   ptr->link=prevnode->link;
   prevnode->link=ptr;
  return head;
}
int main(int argc, char const *argv[])
{
     struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    // Allocate memory for nodes in the link list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
     fourth = (struct Node *)malloc(sizeof(struct Node));
    // link first and second nodes
    head->data = 7;
    head->link = second;
    // Link second and third nodes
    second->data = 11;
    second->link = third;
 
    // Link third and fourth nodes
    third->data = 41;
    third->link = fourth;
 
    // Terminate the LL at the third node
    fourth->data = 66;
    fourth->link = NULL;
    printf("Link list before insertion\n");
    LinkedListTraversal(head);
   // head=insertAtFirst(head,89);
 //  head=insertAtIndex(head,1,56);
 printf("Link list after insertion\n");
     //head=insertAtend(head,97);
 head=insertAfteranode(head,second,63);
    LinkedListTraversal(head);
    return 0;
    
}
