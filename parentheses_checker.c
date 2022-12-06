#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct stack{
	char * arr;
	int size;
	int top;
};

int isEmpty(struct stack * s){
	if(s->top == -1){
		return 1;
	}
	return 0;
}

int isFull(struct stack * s){
	if(s->top == s->size-1){
		return 1;
	}
	return 0;
}

void push(struct stack * s, char elem){
	
	if(!isFull(s)){
		s->top++;
		s->arr[s->top] = elem;
		
	}
	else{
		printf("Stack Full\n");
	}
}

void pop(struct stack * s){
	if(!isEmpty(s)){
		char ele; 
		ele = s->arr[s->top];
		s->top--;
	}
	else{
		printf("Stack empty\n");
	}
}
int paranthesis_checker(char * exp, int len ){

	//initializing stack
	struct stack * s;
	int i;
	s = (struct stack *)malloc(sizeof(struct stack));
	s->size = 100;
	s->top = -1;
	s->arr = (char *)malloc(s->size * sizeof(char));
	
	for(i=0;i<len;i++){
	
		printf("\n for exp[%d], %c \n",i,exp[i]);
		
		if (exp[i] == '('){
			
			push(s,exp[i]);
			printf("\n pushed ( in stack and top = %d \n",s->top);
		}
		else if(exp[i] == ')'){
		
			if (isEmpty(s)){
				printf(" STACK not balanced\n");
				return 0;
			}
			pop(s);
			printf("\n popped ) from stack and top = %d \n",s->top);
		}
		else {
			printf("\n continue \n");
			continue;	
		}
		
	}
	if (isEmpty(s)){
		return 1;
		}
		else{
			return 0;
		}
	
}
int main(){
	char * exp;
	int len,i;
	struct stack * s;
	exp = "(a(+b))";
	len = strlen(exp);
	printf("\nYour string is: %s",exp);
	
	if(paranthesis_checker(exp,len)){
		printf("\n Parentheses match!");
	}
	else{
		printf("\n Parentheses don't match :(");
	}
	
	return 1;
}
