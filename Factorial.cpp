#include<bits/stdc++.h>
using namespace std;

int fact(int n){
	if(n==1){
		return 1;
	}
	return n*fact(n-1);
}

int main(){
	int n,res;
	char ch;
	x:cout<<"Enter a number"<<endl;
	cin>>n;
	res = fact(n);
	cout<<"Factorial of the number is = "<<res<<endl;
	cout<<"To continue press y or Y"<<endl;
	cin>>ch;
	if(ch=='y' || ch=='Y'){
		goto x;
	}
}
