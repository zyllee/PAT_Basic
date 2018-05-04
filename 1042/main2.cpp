#include<stdio.h>
#include<iostream>
#include<string.h>
#define MAXSIZE 1000
using namespace std;

int main(){
	char str[MAXSIZE];
	gets(str);
	int cnt[26] = {0};
	int pos;
	int i;
	for(i = 0;i < strlen(str);i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			pos = str[i] - 'a';
			cnt[pos]++; 
		}
		if(str[i] >= 'A' && str[i] <= 'Z'){
			pos = str[i] - 'A';
			cnt[pos]++; 
		}
	}
	int max;
	for(i = 0;i < 26;i++){
		if(cnt[i] > max){
			max = cnt[i];
			pos = i;
		}
	} 
	cout << (char)('a' + pos) <<  " " << max;
	return 0;
} 
