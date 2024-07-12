#include<bits/stdc++.h>
using namespace std;

int longestSubstring(string str){
	int sum,longestStringLength = INT_MIN;
	int a[26];
	for(int i=0;i<str.length();i++){
		sum=0;
		for(int i=0;i<26;i++){
			a[i]=0;
		}
		for(int j=i;j<str.length();j++){
			int index = (int) str[j]-'a';
			a[index]++;
			if(a[index]>1){
				break;
			}
			sum++;
		}
		if(longestStringLength < sum){
			longestStringLength = sum;
		}
	}
	return longestStringLength;
}

int main(){
	string str;
	int res;
	char ch;
		x:cout<<"Enter a string"<<endl;
		cin.ignore();
		getline(cin,str);
		res = longestSubstring(str);
		
		cout<<"Longest Distinct String length is : "<<res<<endl;
		cout<<"enter y to continue n to terminate"<<endl;
		cin>>ch;
		if(ch=='y' || ch=='Y'){
			goto x;
		}
	
	}
