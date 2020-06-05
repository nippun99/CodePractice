#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* left;
		node* right;
		node(int d){
			data=d;
			left=right=NULL;
		}
};

node* mktree(int* arr,int start,int end){
	if(start>end){
		return NULL;
	}
	int mid=(start+end)/2;
	node* root=new node(arr[mid]);
	root->left=mktree(arr,start,mid-1);
	root->right=mktree(arr,mid+1,end);
	return root;
}

void iod(node* root){
	if(root==NULL){
		return;
	}
	
	iod(root->left);
	cout<<root->data<<" ";
	iod(root->right);
}



int main() {
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(int);
	cout<<n<<endl;
	node* rt=mktree(arr,0,n-1);
	iod(rt);
	
	return 0;
}

