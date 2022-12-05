#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

struct queue {
	int * arr;
	int size;
	int f;
	int r;	 
};

void enqueue(struct queue * q, int ele){
	if(q->r == q->size-1){
		printf("Queue is full \n");
	}
	else if(q->r == -1 && q->f == -1) {
		q->f = q->r = 0;
		q->arr[q->r] = ele;
	}
	else{
		q->r++;
		q->arr[q->r] = ele;
	}
	
}

int dequeue(struct queue * q){
	if(q->f==-1 || q->f > q->r){
		return 0;
	}
	else{
		int ele = q->arr[q->f];
		q->f++;
		return ele;
	}
}


void qtraverse(struct queue * q){
	int ptr = q->f;
	if(q->f==-1 || q->f > q->r){
		printf("Queue is empty \n");
	}
	else{
		printf("Elements in Queue are \n");
		while(ptr<=q->r){
			printf("%d \n",q->arr[ptr]);
			ptr++;
		}
	}
}
int main(){
	struct queue * q;
	q = (struct queue *)malloc(sizeof(struct queue));
	q->r = q->f = -1;
	q->size = 100;
	q->arr = (int * )malloc(q->size*sizeof(int)); //dynamucally allocatating memory to array
	int ele;
	//Function calls
	enqueue(q,24);
	enqueue(q,25);
	enqueue(q,26);
	enqueue(q,27);
	qtraverse(q);

	ele = dequeue(q);
	ele = dequeue(q);
	ele = dequeue(q);
	
	if(ele){
		printf("the removed element is %d \n",ele);
	}
	else{
		printf("Queue empty \n");
	}
	qtraverse(q);
	
}
