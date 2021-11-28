#include <conio.h>
#include <stdio.h>


void bubble_sort(int * arr, int size){
	
	int i,j,temp,flag;
	
	for(i=0;i<size-1;i++){
		flag= 0;
		for(j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
				flag=1;
			}
			
		}
		
		if (flag == 0) 
		break;
	}
}

int main(){
	int size,i,arr[100];
	printf("*** BUBBLE SORT ***\n");
	printf("Enter size of array: ");
	scanf("%d",&size);
	printf("\nEnter elements of array: ");
	for(i=0;i<size;i++){
		scanf("\n%d",&arr[i]);
	}
	//int arr[5] = {15,16,6,8,5};
	//size = 5;
	bubble_sort(arr,size);
	printf("The sorted list is:\n ");
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	return 1;
}
