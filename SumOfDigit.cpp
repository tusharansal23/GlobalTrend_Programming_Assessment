#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
	int sum=0;
	for(int i=n;i!=0;i/=10){
		sum += i%10;
	}
	return sum;
}

int main(){
	int n,res;
	char ch;
	x:cout<<"Enter a number"<<endl;
	cin>>n;
	res = sumOfDigits(n);
	cout<<"Sum of digits = "<<res<<endl;
	cout<<"To continue press y or Y"<<endl;
	cin>>ch;
	if(ch == 'y' || ch=='Y'){
		goto x;
	}
}
