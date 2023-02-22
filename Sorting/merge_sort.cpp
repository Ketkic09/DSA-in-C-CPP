# include <bits/stdc++.h
using namespace std;

void merge(int arr[],int lb,int mid,int ub){
	int temp[100000];
	int i = lb;
	int j=mid+1;
	int k=lb;
	while(i<=mid && j<=ub){
		if(arr[i]<arr[j]){
			temp[k] = arr[i];
			i++;
			k++;
		}
		else{
			temp[k] = arr[j];
			j++;
			k++;
		}
	}
	if(i>mid){
		while(j<=ub){
			temp[k] = arr[j];
			j++;
			k++;
		}
		
	}
	else{
		while(i<=mid){
			temp[k] = arr[i];
			i++;
			k++;
		}
		
	}
	for(int m=lb;m<=ub;m++){
		arr[m] = temp[m];
	}
}


void mergeSort(int arr[],int lb,int ub){
	if(lb<ub){
		int mid = (lb+ub)/2;
		mergeSort(arr,lb,mid);
		mergeSort(arr,mid+1,ub);
		merge(arr,lb,mid,ub);
	}
	
}



int main(){
	int arr[] = {9,4,7,6,3,1,5,4};
	mergeSort(arr,0,7);
	cout<<"Sorted array is:"<<endl;
	for(int i=0;i<=7;i++){
		cout<<" "<<arr[i];
	}
	return 0;
}
