#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct Node
{
   char data;
   struct Node *next;
};


/* Given a reference (pointer to pointer) to the head
of a list and an int, appends a new node at the end */
void append(struct Node** head_ref, int new_data)
{
	/* 1. allocate node */
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->next = NULL;
	struct Node *last = *head_ref; 
    int return_val = 0; 

	
	new_node->data = new_data;

	
	if (*head_ref == NULL)
	{
	    *head_ref = new_node;
	    return_val = 1;
	}
    if (return_val != 1)
    {

        
        while (last->next != NULL)
        {
            last = last->next;
			}
        
        last->next = new_node;
    }
	return;
}

// This function prints contents of linked list starting from head
void printList(struct Node *node)
{
    while (node != NULL)
    {
	    printf("%d ", node->data);
	    node = node->next;
    }
}

int main()
{
    int a = 100000;
    printf("%d", a);

    return 0;
}
