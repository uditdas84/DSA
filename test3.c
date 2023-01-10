// insert_in_between

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


struct Node* insert_at_the_index(struct Node* head,int data,int index)
{
    struct Node* ptr= (struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
    int i=0;
    
    while(i != 0)
    {
        p=p->next;
        i++;
    };
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
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
    
    head=insert_at_the_index(head,12,1);
    linked_list_trivarsal(head);
    return 0;
}