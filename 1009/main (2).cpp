#include<stdio.h>
#include<iostream>
#define MAXSIZE 100
using namespace std;

int reverse(char str[]){
	char result[MAXSIZE][MAXSIZE];
	int i = 0;
	int cnt = 0;
	while(str[i] != '\0'){
		if(str[i] != ' '){
			result[cnt][i - cnt] = str[i];
//			cout << result[cnt][i - cnt];
			i++;
		}
		else{
			cnt++;
			i++;
		}
	}
	int j,k=0;
	int sum = 0;
	for(j = cnt;j >= 0;j--){
		sum +=k; 
		for(k = sum;k < i - cnt;k++){
			cout <<result[j][k];
		}
	}
}
int main(){
	char str[MAXSIZE];
	gets(str);
	reverse(str);
	return 0;
} 
