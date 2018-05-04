#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	string res = "";
	string tmp = "";
	int len = str.size();
	for(int i = 0;i < len;i++){
		if(str[i] != ' '){
			tmp += str[i];
		}
		else{
			res = ' ' + tmp + res;
			tmp = "";
		}
	}
	res = tmp + res;
	cout << res;
}
