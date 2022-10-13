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
// Case 1 deleting the first node O(1)
 struct Node*deletefirst(struct Node*head)
{
  struct Node*ptr=head;
  head=head->link;
  free(ptr);
  return head;
}
    //case 2 deleting at a given index from linked list
    struct Node*deleteAtIndex(struct Node*head,int index)
    {
        
        struct Node*p=head;
        struct Node*q=head->link;
        for(int i=0;i<index-1;i++)
        {
           p=p->link;
           q= q->link;
        }
        p->link=q->link;
        free(q);
        return head;
    }
//case3 delete the last node
struct Node*deletethelast(struct Node*head)
{
    struct Node*p=head;
    struct Node*q=head->link;
    while (q->link!=NULL)
    {
          p=p->link;
          q=q->link;
    }
         p->link=q->link;
         free(q);
         return head;

}
//case 4 delete by a given value
struct Node*deletebyvalue(struct Node*head,int value)
    {
        
        struct Node*p=head;
        struct Node*q=head->link;
        while(q->data!=value && q->link!=NULL)
        {
           p=p->link;
           q= q->link;
        }
        if (q->data==value)
        {
           p->link=q->link;
            free(q);
        }
        if (q->data!=value)
        {
            printf("The gievn value is not in the LL and can't be deleted\n");
        }
        
       
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
    head->data = 4;
    head->link = second;
    // Link second and third nodes
    second->data = 3;
    second->link = third;
 
    // Link third and fourth nodes
    third->data = 8;
    third->link = fourth;
 
    // Terminate the LL at the third node
    fourth->data = 1;
    fourth->link = NULL;
    printf("Link list before deletion\n");
    LinkedListTraversal(head);
  // head=deletefirst(head);
      //head= deleteAtIndex(head, 2);
     //head=deletethelast(head);
     head=deletebyvalue(head,13);
 printf("Link list after deletion\n");
    
    LinkedListTraversal(head);
    return 0;
    
}