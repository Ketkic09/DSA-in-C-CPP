#include <stdio.h>
#include <conio.h>


int * selection_sort(int * arr, int size){
	int i, min, j;
	
	for(i=0;i<size-1;i++){
		
		min = i;
		
		for(j=i+1;j<size;j++){
			if (arr[j] < arr[min])
				min = j;
		}
		
		if (min!= i) {
			
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
	
	return arr;
}

int main(){
	int i, *sorted,size,arr[100];
	printf("*** SELECTION SORT ***\n");
	printf("Enter size of array: ");
	scanf("%d",&size);
	printf("\nEnter elements of array: ");
	for(i=0;i<size;i++){
		scanf("\n%d",&arr[i]);
	}
	printf("The sorted elements are: \n");
	sorted =selection_sort(arr,size);
	for(i =0;i<size;i++){
		printf("%d ",sorted[i]);
	}
	return 1;
}
