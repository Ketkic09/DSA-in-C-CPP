#include<bits/stdc++.h>
using namespace std;

int main(){
	
	/*
	
	****
	****
	****
	****
	
	*/
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<"---------------------------"<<endl;
	
	/* 
	
	*
	**
	***
	****
	*****
	*/
	
	for(int i = 1; i<=5;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	/*
	1
	22
	333
	4444
	55555
	*/
	for(int i=1;i<=5;i++){
		int k = i;
		for(int j=1;j<=i;j++){
			
			cout<<k;
			
		}
		cout<<endl;
	}
	cout<<"---------------------------"<<endl;
	
	/*
	*****
	****
	***
	**
	*
       */
	
	for(int i=0;i<5;i++){
		for(int j=1;j<=5-i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"---------------------------"<<endl;
	
	/*
	12345
	1234
	123
	12
	1
	*/
	for(int i=0;i<5;i++){
		for(int j=1;j<=5-i;j++){
			cout<<j;
		}
		cout<<endl;
	}
	
	cout<<"---------------------------"<<endl;
	
	/*
	
			   	   	Traingle 
	*/
	
	for(int i=0;i<5;i++){
		
		// for space
		for(int j=0;j<5-i-1;j++){
			cout<<" ";
			
		}
		
		// for *
		for(int j=0;j<2*i+1;j++){
			cout<<"*";
		}
		
		
		cout<<endl;
	}
	
	cout<<"---------------------------"<<endl;
	
	/*
	
	*********
	 *******
	  *****
	   ***
	    *
	*/
	
	for(int i=4;i>=0;i--){
	
		for(int j=0;j<5-i;j++){
			cout<<" ";
		}
		for(int j=0;j<i*2+1;j++){
			cout<<"*";
		}
		
		cout<<endl;
	}
	cout<<"---------------------------"<<endl;
	
	/*
	
		 *
		***
	   *****
	  *******
	 *********
	 *********
	  *******
	   *****
	    ***
	     *
	*/
	
	for(int i=0;i<5;i++){
		
		// for space
		for(int j=0;j<5-i-1;j++){
			cout<<" ";
			
		}
		
		// for *
		for(int j=0;j<2*i+1;j++){
			cout<<"*";
		}
		
		cout<<endl;
	}
	for(int i=4;i>=0;i--){
	
		for(int j=0;j<5-i-1;j++){
			cout<<" ";
		}
		for(int j=0;j<i*2+1;j++){
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	cout<<"---------------------------"<<endl;
	
	/*
	
1	*			
2	**
3	***
4	****
5	*****
6	****
7	***
8	**
9	*
	
	*/
	
	for(int i=1;i<=9;i++){
		if(i<6){
			for(int j=0;j<i;j++){
				cout<<"*";
			}
			cout<<endl;	
		}
		else{
			for(int j=0;j<9-i+1;j++){
				cout<<"*";
			}
			cout<<endl;
		}
		
	}
	
	return 0;
}
