#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Node {
	int data;
	struct Node * next;
	struct Node * prev;
};


void traverse(struct Node * head){
	
	struct Node * ptr = head;
	
	while(ptr->next!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("%d \n",ptr->data);
	printf("Doubly Linked List in reverse order ");
	printf("\n%d ",ptr->data);
	ptr=ptr->prev;
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->prev;
	}
}
int main(){
	
	struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 4;
    head->next = second;
	head->prev = NULL;
    // Link second and third nodes
    second->data = 3;
    second->next = third;
	second->prev = head;
    // Link third and fourth nodes
    third->data = 8;
    third->next = fourth;
	third->prev = second;
    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = NULL;
	fourth->prev= third;
    printf("Doubly Linked List in given order\n");
    traverse(head);

	
	return 1;
}
