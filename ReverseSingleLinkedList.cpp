#include<bits/stdc++.h>
using namespace std;

struct Node {
		int data;
		Node* next;
	};
Node* createNode(int val, Node* head){
		Node *ptr =new Node;
		ptr->data = val;
		ptr->next = nullptr;
		if(head !=nullptr){
			head->next=ptr;
		}
		head = ptr;
		return head;
	}

void displayList(Node *head){
	while(head!=nullptr){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

Node* reverseList(Node *head){
	Node *prev=nullptr,*forth = head;
	while(forth!=nullptr){
		
		forth=forth->next;
		head->next=prev;
		prev=head;
	
		head=forth;
		
	}
	return prev;
}

int main(){
	Node *head=nullptr,*start;
	int n,val;
	char ch;
	x:cout<<"How many elements you have to enter"<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Enter value for element no. "<<i+1<<" : ";
		cin>>val;
		head=createNode(val,head);
		if(i==0){
			start=head;
		}
	}
	cout<<"Entered list : ";
	displayList(start);
	start = reverseList(start);
	cout<<"Reversed list : ";
	displayList(start);
	cout<<"To continue press y or Y"<<endl;
	cin>>ch;
	if(ch=='y' || ch=='Y'){
		goto x;
	}
}
