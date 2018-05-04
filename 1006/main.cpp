#include<stdio.h>
#include<iostream>
#define MAXSIZE 100
using namespace std;

 
int main(){
	int n;
	cin >> n;
	int arr[MAXSIZE];
	int i = 0;
	while(n != 0){
		arr[i] = n %10;
		n /= 10;
		i++;
	}
	int j;
	if(i == 4){
		for(j = 0;j < arr[3] * 10 + arr[2];j++){
			cout << "B";
		}
		for(j = 0;j < arr[1] ; j++){
			cout << "S";
		}
		for(j = 0;j < arr[0];j++){
			cout << j + 1;
		}
	}
	if(i == 3){
		for(j = 0;j < arr[2] ;j++){
			cout << "B";
		}
		for(j = 0;j < arr[1] ; j++){
			cout << "S";
		}
		for(j = 0;j < arr[0];j++){
			cout << j + 1;
		}
	}
	if(i == 2){
		for(j = 0;j < arr[1] ; j++){
			cout << "S";
		}
		for(j = 0;j < arr[0];j++){
			cout << j + 1;
		}
	}
	if(i == 1){
		for(j = 0;j < arr[0];j++){
			cout << j + 1;
		}
	}
	return 0;
} 
