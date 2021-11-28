#include <stdio.h>
#include <conio.h>

int * insertion_sort(int * arr, int size){
	int temp = arr[0];
	int i,j;
	
	for(i=1;i<size;i++){		// to compare nos 
		temp = arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>temp){ // to sort and get sorted sublist
			arr[j+1] = arr[j];
			
			j-=1;
		}
		
		arr[j+1] = temp;
		
		
	}
	
	return arr;
}

int main(){
	int i, *n,arr[100],size;
	printf("*** INSERTION SORT ***\n");
	printf("Enter size of array: ");
	scanf("%d",&size);
	printf("\nEnter elements of array: ");
	for(i=0;i<size;i++){
		scanf("\n%d",&arr[i]);
	}
	printf("The sorted elements are: \n");
	n = insertion_sort(arr,size);
	for(i=0;i<size;i++){
		printf("%d ",n[i]);
	}
	return 1;
}
