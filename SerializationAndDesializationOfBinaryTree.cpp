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

void inOrder(tree* root)
{
    if (root) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

void serialize(tree* root, FILE* fp){
	
	if(root == nullptr){
		fprintf(fp,"%d",-1);
		return;
	}
	fprintf(fp,"%d",root->data);
	serialize(root->left,fp);
	serialize(root->right,fp);
}

void deserialize(tree* root,FILE* fp){
	
	int data;
	if(!fscanf(fp,"%d",&data) || data ==-1)
	return;
	
	root= create(data);
	deserialize(root->left,fp);
	deserialize(root->right,fp);
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
	
		FILE* fp = fopen("tree.txt", "w");
    	if (fp == NULL) {
        	puts("Could not open file");
        	return 0;
    	}
    	serialize(ptr, fp);
    	fclose(fp);
    	
    	tree *rootDeserial = nullptr;
    	fp = fopen("tree.txt","r");
		deserialize(rootDeserial,fp);
		cout<<"Pre-order Traversal of the tree will be"<<endl;
		preorder(rootDeserial);
		cout<<endl;   	
		
	cout<<"do you want to continue press y for YES and n for NO"<<endl;
	cin>>ch;
	if(ch=='y')
	goto y;
}
	
