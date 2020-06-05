#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int s,int e){
	int mid=(s+e)/2;
	int i=s;
	int j=mid+1;
	int k=s;
	int temp[100];
	while(i<=mid && j<=e){
		if(a[i]<a[j]){
			temp[k++]=a[i++];
		}
		else{
			temp[k++]=a[j++];
		}
	}
	
	while(i<=mid){
		temp[k++]=a[i++];
	}
	while(j<=e){
		temp[k++]=a[j++];
	}
	
	for(int n=s;n<=e;n++){
		a[n]=temp[n];
	}
	
}
void mergeSort(int a[],int s, int e){
	if(s>=e){
		return;
	}
	int mid=(s+e)/2;
	
	mergeSort(a,s,mid);
	mergeSort(a,mid+1,e);
	merge(a,s,e);	
}




int main() {
	
	int a[]={5,4,6,2,1,9,7,3};
	mergeSort(a,0,7);
	for(int i=0;i<8;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}

