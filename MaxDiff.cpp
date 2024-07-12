#include<bits/stdc++.h>
using namespace std;

int maxDiff(int n, int arr[]){
	int max=INT_MIN,min=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return (max-min);
}
void displayArray(int n, int arr[]){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int n,res;
	char ch;
	x:cout<<"Enter number of elements of an array"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	displayArray(n,arr);
	res = maxDiff(n,arr);
	cout<<"Maximum difference of an array is = "<<res<<endl;
	cout<<"To continue press y or Y"<<endl;
	cin>>ch;
	if(ch=='y' || ch=='Y'){
		goto x;
	}
	
}
