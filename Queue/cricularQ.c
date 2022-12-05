#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

struct queue{
	int * arr;
	int size;
	int f;
	int r;	
};

void enqueue(struct queue * q, int ele){
	if((q->r+1)%q->size == q->f) {  //checks if after circular increment the next element in f
		printf("Queue is full \n");
	}
	else{
	
		q->r = (q->r+1)%q->size; //circular increment rear pointer 
		q->arr[q->r] = ele; 
		printf("%d added on %d after enqueue \n",q->arr[q->r],q->r);
	}
}

int dequeue(struct queue * q){
	int val;
	if(q->f == q->r){
		printf("Queue is empty \n");
		return 0;
	}
	else{
		
		q->f = (q->f+1)%q->size;                   //circular increment f pointer 
		
		val = q->arr[q->f];
		printf("deqeued at %d val is %d \n",q->f,val);
		return val;
	}
}

void qtraverse(struct queue * q){
	int ptr = q->f; //since ptr takes -1 initially and f points to empty block

	if(q->f == q->r ){
		printf("Queue is empty \n");
	}
	else{
		printf("******************* \n");
		printf("Elements in Queue are \n");
		while((ptr+1)%q->size != q->r){
			ptr = (ptr+1)%q->size;     //circular increment ptr 
			printf("%d \n",q->arr[ptr]);
		}
		printf("%d \n",q->arr[q->r]); //to print the last element
		printf("******************* \n");
	} 
}

int main(){
	struct queue * q;
	q = (struct queue *)malloc(sizeof(struct queue));
	q->r = q->f = -1;

	q->size = 5;
	q->arr = (int * )malloc(q->size*sizeof(int)); //dynamically allocatating memory to array
	
	int ele;
	//Function calls
	enqueue(q,24);
	enqueue(q,25);
	enqueue(q,26);
	enqueue(q,27);
	qtraverse(q);

	ele = dequeue(q);
	ele = dequeue(q);
	enqueue(q,35);
	ele = dequeue(q);
	enqueue(q,36);
	ele = dequeue(q);

	if(ele){
		printf("the removed element is %d \n",ele);
	}
	else{
		printf("Queue empty \n");
	}
	qtraverse(q);
	enqueue(q,37);
	qtraverse(q);

}
