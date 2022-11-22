#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Node{
	int data;
	struct Node * next;
};

void ll_traversal(struct Node *ptr){
	while(ptr!=NULL){
		printf("Element is %d\n",ptr->data);
		ptr = ptr->next;
	}
}

int isFull(struct Node * top){
	struct Node * p = (struct Node *)malloc(sizeof(struct Node));
	if(p==NULL){
		return 1;
	}
	return 0;
}

int isEmpty(struct Node * top){
	if(top==NULL){
		return 1;
	}
	return 0;
}

struct Node * push(struct Node * top,int x){
	if(!isFull(top)){
		struct Node * newnode = (struct Node *)malloc(sizeof(struct Node));
		newnode->data = x;
		newnode->next = top;
		top = newnode;
		return top;
	}
	printf("Stack Overflow");	
}

struct Node * pop(struct Node *top){
	int x;
	if(isEmpty(top)){
		printf("Stack is empty! can't pop");
		return NULL;
	}
	else{
		x = top->data;
		struct Node * n = top;
		top = top->next;
		free(n);
		printf("popped element is %d\n",x);	
		return top;	
	}
}

int main(){
	struct Node * top = NULL;
	top = push(top,90);
	top = push(top,77);
	top = push(top,80);
	ll_traversal(top);
	
	top = pop(top);
	printf("After popping LL is\n");
	if(top!=NULL){
			ll_traversal(top);
	}

	return 0;
}
