#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
	string pattern;
	string input;
	cin >> pattern >> input;
	int i,j;
/*	vector<string> res;
	res.push_back(pattern);
	res.push_back(input);
	for(i = 0;i < res.size();i++)
		cout << res[i] << endl;
*/ 
	//ת��д 
	for(i = 0;i < pattern.length();i++)
		pattern[i] = toupper(pattern[i]);
	//ת��д 
	for(i = 0;i < input.length();i++)
		input[i] = toupper(input[i]); 
	bool pair;
	vector<char> res;
	//�Ҳ�ƥ����ַ� 
	for(i = 0;i < pattern.length();i++){
		pair = false;
		for(j = 0;j < input.length();j++){
			if(input[j] == pattern[i]){
				pair = true;
			}
		}
		if(!pair) res.push_back(pattern[i]);
	}
	//���ظ����ַ� 
	for(i = 0;i < res.size();i++){
		for(j = i + 1;j < res.size();j++){
			if(res[i] == res[j])
				res[j] = '#';
		}
	}
	for(i = 0;i < res.size();i++){
		if(res[i] != '#')
			cout << res[i];
	}
	return 0;
} 
