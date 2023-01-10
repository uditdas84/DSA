// linked_list_insertion
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};


void linked_list_trivarsal(struct Node *ptr)
{
    while(ptr != NULL)
    {
        printf("Element :%d\n",ptr->data);
        ptr =ptr->next; 
    }
}


struct Node* insert_at_first(struct Node* head,int data)
{
    struct Node* ptr= (struct Node*)malloc(sizeof(struct Node));
    ptr ->next = head;
    ptr -> data=data;

    return ptr;
}

int main()
{
    struct Node*head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in the head
    head= (struct Node*)malloc(sizeof(struct Node));
    second= (struct Node*)malloc(sizeof(struct Node));
    third= (struct Node*)malloc(sizeof(struct Node));
    fourth= (struct Node*)malloc(sizeof(struct Node));

    // link first and second nodes
    head ->data=7;
    head->next= second;
    // link second and third nodes
    second ->data=11;
    second->next= third;
   // link third and fourth nodes
    third ->data=66;
    third->next= fourth;
    // Terminate the linked lsit at the 4th node
    fourth ->data=9;
    fourth ->next=NULL;
    
    head=insert_at_first(head,99);
    linked_list_trivarsal(head);
    return 0;
}