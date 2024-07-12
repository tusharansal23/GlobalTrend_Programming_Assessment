#include<bits/stdc++.h>
using namespace std;


rotate(int n, int arr[], int steps){
	int last;
	steps = steps % n;
	while(steps){
		last = arr[n-1];
		for(int i=n-1; i>0;i--){
			arr[i]=arr[i-1];
		}
		arr[0] =last;
		steps--;
	}
	
}
void displayArray(int n, int arr[]){
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int n,steps;
	char ch;
	x:cout<<"Enter number of elements of an array"<<endl;
	cin>>n;
	int res[n];
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter by how much steps you have to rotate the array"<<endl;
	cin>>steps;
	cout<<"Initial array is : ";
	displayArray(n,arr);
	rotate(n,arr,steps);
	cout<<"Rotated array is : ";
	displayArray(n,arr);
	cout<<"To continue press y or Y"<<endl;
	cin>>ch;
	if(ch=='y' || ch=='Y'){
		goto x;
	}
	
}
