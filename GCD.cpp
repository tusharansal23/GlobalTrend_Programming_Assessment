#include<bits/stdc++.h>
using namespace std;

int findGCD(int fir, int sec){
	if(fir==sec){
		return fir;
	}
	else if(fir > sec){
		return findGCD(fir-sec,sec);
	}
	else{
		return findGCD(fir,sec-fir);
	}
}
int main(){
	int first,sec,res;
	char ch;
	x:cout<<"Enter first number"<<endl;
	cin>>first;
	cout<<"Enter second number"<<endl;
	cin>>sec;
	res = findGCD(first,sec);
	cout<<"Highest common factor is = "<<res<<endl;
	cout<<"To continue press y or Y"<<endl;
	cin>>ch;
	if(ch=='y' || ch=='Y'){
		goto x;
	}
}
