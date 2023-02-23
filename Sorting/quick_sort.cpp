#include<bits/stdc++.h>
using namespace std;


int partition(int arr[],int lb,int ub){
	int start = lb;
	int end = ub;
	int pivot = arr[lb];
	while(start<end){
		while(arr[start]<=pivot){
			start++;
		}
		while(arr[end]>pivot){
			end--;
		}
		if(start<end){
			int temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
		}
	}
			int temp = arr[lb];
			arr[lb] = arr[end];
			arr[end] = temp;
			return end;
}

void quickSort(int arr[],int lb,int ub){
	if(lb<ub){
		int loc = partition(arr,lb,ub);
		quickSort(arr,lb,loc-1);
		quickSort(arr,loc+1,ub);
	}
	
}


int main(){
	int arr[] = {4,1,7,9,3,4};
	quickSort(arr,0,5);
	cout<<"After sort array is:"<<endl;
	for (int i=0;i<=5;i++){
		cout<<" "<<arr[i];
	}
	return 0;
	
}
