// Linked List in C Implementation code
#include<stdio.h>
#include<stdlib.h>
//stdlib is included because we will be using  ‘malloc’

// creating a node in linked list
struct Node { 
    int data; 
    struct Node* next; 
    // Pointer pointing towards next node
};

//function to print the linked list
void display(struct Node* node) 
{ 
    while (node != NULL) { 
        printf("%d ", node->data); 
        node = node->next; 
    } 
}

struct Node* newNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void insertion_sort(struct Node** head, struct Node* newNode)//function to insert data in sorted position
{
	//If linked list is empty
	if (*head == NULL || (*head)->data >= newNode->data)
	{
		newNode->next = *head;
		*head = newNode;
		return;
	}

	//Locate the node before insertion
	struct Node* current = *head;
	while (current->next != NULL && current->next->data < newNode->data)
		current = current->next;

	newNode->next = current->next;
	current->next = newNode;
}
//Linked list creation and trivarsal


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
    
    // display(head);

    insertion_sort(&head,newNode(45));
    display(head);
    
    return 0;
}