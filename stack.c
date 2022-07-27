
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

struct stack {
	int size;
	int *arr;
	int top;
};

void push(struct stack * s){
	int val;
	if (s->top== s->size-1){
		printf("Stack overflow");
		
	}
	else {
		printf("Enter value: ");
		scanf("%d",&val);
		s->top++;
		s->arr[s->top] = val;
	}
	

}

int pop(struct stack * s){
	int x;
	if(s->top==-1){
		printf("Stack Empty\n");
		return -1;
	}
	else{
		x=s->arr[s->top];
		s->top--;
		return x;
	}
}
int peek(struct stack *s, int i){
	int ind;
	ind = s->top-i+1;
	
	if (ind<0){
		printf("Invalid position");
		return -1;
	}
	else{
		return s->arr[ind];
	}
}
int main() {
	int x,i,ele,popped;
	struct stack * s;
	s= (struct stack *) malloc(sizeof(struct stack));   // using malloc to reserve the memory in heap for this stack 
	
	s->size = 100;
	s->top = -1;
	s->arr = (int *)malloc(s->size * sizeof(int)); //dynamically allocate memory to array
		
	printf("Pushing elements:\n ");
	push(s);
	push(s);
	push(s);

	printf("\nEnter peek position: ");
	scanf("%d",&i);
	ele = peek(s,i);
	printf("\nelement at %d is %d",i,ele);
	printf("\n Lets pop an element");
	popped = pop(s);
	if(popped!=-1)
	printf("\nThe popped element is %d",popped);
	else
	printf("\nNothing to pop , stack in empty.");
	return 1;
}


