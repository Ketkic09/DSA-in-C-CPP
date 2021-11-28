#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Node {
	int data;
	struct Node * next;
};

void ll_traversal(struct Node *ptr){
	
	while(ptr!=NULL){
		printf("Element: %d\n",ptr->data);
		ptr=ptr->next;
	}
}

struct Node * insert_begin(struct Node * head){
	int ele;
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	printf("Enter data to be inserted in the begining: ");
	scanf("%d",&ele);
	ptr->data = ele;
	ptr->next=head;
	
	return ptr; 
}


struct Node * insert_end(struct Node * head){
	int ele;
	struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
	struct Node * p = head;
	printf("Enter data to be inserted at the end: ");
	scanf("%d",&ele);
	while (p->next!=NULL){
		p = p->next;
	}
	ptr->data=ele;
	p->next=ptr;
	ptr->next=NULL;
	
	return head;
}

struct Node * insert_after(struct Node * head,int index,int data){
		int i =1,ind,ele;
		struct Node * ptr = head;
		struct Node * newnode = (struct Node *)malloc(sizeof(struct Node));
		printf("Enter position to be inserted after: ");
		scanf("%d",&ind);
		printf("Enter data to be inserted at the end: ");
		scanf("%d",&ele);
		while(i<ind){
			ptr=ptr->next;
			i=i+1;
		}
		
		if(ptr->next == NULL){
			printf("This is the last node calling function insert_end\n");
			head=insert_end(head);
			
		}
		else{
		
		newnode->data = ele;
		newnode->next=ptr->next;
		ptr->next=newnode;
	}
		return head;
}
int main(){
	
	struct Node *head;
	struct Node *third;
	struct Node *second;
	struct Node *forth;
	
	head = (struct Node *)malloc(sizeof(struct Node));
	second = (struct Node *)malloc(sizeof(struct Node));
	third = (struct Node *)malloc(sizeof(struct Node));
	forth = (struct Node *)malloc(sizeof(struct Node));
	
	head->data = 2;
	head->next = second;
	
	second->data = 3;
	second->next = third;
	
	third->data = 4;
	third->next = forth;
	
	forth->data = 6;
	forth->next = NULL;
	printf("*** LL INSERTION ***\n");
	printf("LL before calling insertion function\n");
	ll_traversal(head);
	printf("---------------------------------------------\n");
	printf("LL after calling insert_begin function\n");
	head=insert_begin(head);
	ll_traversal(head);
	printf("---------------------------------------------\n");
	printf("LL after calling insert_end function\n");
	head=insert_end(head);
	ll_traversal(head);
	printf("---------------------------------------------\n");
	printf("LL after calling insert_after function\n");
	head=insert_after(head,1,105);
	ll_traversal(head);
	printf("---------------------------------------------\n");
	return 1;
}
