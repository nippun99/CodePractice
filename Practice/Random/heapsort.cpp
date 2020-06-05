#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int n,int i){
	int parent=i;
	int left=2*i+1;
	int right=2*i+2;
	
	if(left<n && arr[left]>arr[parent]){
		parent=left;		
	}
	if(right<n && arr[right]>arr[parent]){
		parent=right;		
	}
	if(parent != i){
		swap(arr[parent],arr[i]);
		heapify(arr,n,parent);
	}
}

void hs(int arr[],int n){
	
	for(int i=n/2-1;i>=0;i--)
		heapify(arr,n,i);
	for(int i=n-1;i>0;i--){
		swap(arr[0],arr[i]);
		heapify(arr,i,0);
	}
}



int main() {
	
	int arr[] = {5,4,6,2,1,9,7,3}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    hs(arr, n);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}

