#include<bits/stdc++.h>
using namespace std;
// Topic--------Creation of a tree according to the user's choice for better understanding and determining the flow of program
struct tree{
	int data;
	tree *right;
	tree *left;
};
tree* create(int n){
	tree *temp=new tree;
	temp->left=NULL;
	temp->right=NULL;
	temp->data=n;
	return temp;
}
tree* insert(tree *root,int n){
	char ch;
	if(root==NULL){
		return create(n);// Currently there is no element so directly create ,insert anode and return its address
	}
	else{
		cout<<"where you want to insert left or right for left press l and for right press r"<<endl;
		x:cin>>ch;
		if(ch=='l'){
			if(root->left==NULL){
				root->left=create(n);
				return root->left;
			}
			else{
				root=root->left;
				cout<<"Space is occupied again enter left or right i.e l or r to provide an unoccupied position to the element"<<endl;
				goto x;
			}
		}
		else if(ch=='r'){
			if(root->right==NULL){
				root->right=create(n);
				return root->right;
			}
			else{
				root=root->right;
				cout<<"Space is occupied enter again left or right i.e l or r to provide an unoccupied position to the element"<<endl;
				goto x;
			}
		}
	}
}
preorder(tree *root){
	if(root){
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}

int calcSum(tree *root,int sum){
	if(root == nullptr){
		return 0;
	}
	int leftSum = calcSum(root->left,sum);
	int rightSum = calcSum(root->right,sum);
	
	int maxPathRoot = max(max(leftSum,rightSum)+root->data,root->data);
	int overallMax = max(maxPathRoot,leftSum+rightSum+root->data);
	sum = max(sum,overallMax);
	
	return sum;
}

int findMaxPathSum(tree *root){
	int sum = INT_MIN;
	return calcSum(root,sum);
}


int main(){
	tree *root=NULL,*ptr=NULL;
	int n,temp;
	char ch;
	y:cout<<"Enter how many numbers you have to enter"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter number"<<endl;
		cin>>temp;
	root=insert(ptr,temp);
	if(i==0){
		ptr=root;
	}
	}
	cout<<"Pre-order Traversal of the tree will be"<<endl;
		preorder(ptr);
		cout<<endl;
		
		int pathSum = findMaxPathSum(ptr);
		cout<<"Path sum is : "<<pathSum<<endl;
	cout<<"do you want to continue press y for YES and n for NO"<<endl;
	cin>>ch;
	if(ch=='y')
	goto y;
}
	
