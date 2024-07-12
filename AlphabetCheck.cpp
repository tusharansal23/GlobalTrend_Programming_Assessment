#include<bits/stdc++.h>
using namespace std;

bool checkAlphabets(string str){
	int flag=1;
	for(int i=0;i<str.length();i++){
		if(!(str[i]>='a' && str[i]<='z') && !(str[i]>='A' && str[i]<='Z') && !isspace(str[i])){
			flag=0;
		}
	}
	return (flag==0?0:1);
}

int main(){
	string str,result="";
	char ch;
		x:cout<<"Enter a string"<<endl;
		cin.ignore();
		getline(cin,str);
		bool res = checkAlphabets(str);
		//cout<<res<<" "<<str<<endl;
		if(res==0){
			result= "false";
		}else result = "true";
		cout<<"String contains alphabets only : "<<result<<endl;
		cout<<"enter y to continue n to terminate"<<endl;
		cin>>ch;
		if(ch=='y' || ch=='Y'){
			goto x;
		}
	
	}
