#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
void add_at_pos(struct node* head, int data, int pos){
    struct node *ptr = head;
    struct node*ptr2 = malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;
    pos--;
    while(pos!=1){
        ptr = ptr->link;
        pos--;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
}
int main(){
    struct node* head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node* current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 56;
    current->link = NULL;
    head->link->link = current;

    int data = 67, position = 1;
    add_at_pos(head, 67, 2);
    struct node *ptr  = head;
    while(ptr != 1){
        printf("%d\t", ptr->data);
        ptr = ptr->link;
    }
    return 0;

}