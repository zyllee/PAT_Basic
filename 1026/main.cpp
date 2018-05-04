#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	long long c1,c2;
	double sum;
	cin >> c1 >> c2;
	sum = (double)(c2 - c1) / 100;
	long hour,min;
	int sec;
	hour = sum / (60*60);
	min = (sum - hour * 3600) / 60; 
	sec = (int)(sum - hour *3600 - min *60 + 0.5);
//	cout << sec <<endl; 
	printf("%02d:%02d:%02d",hour,min,sec);
	return 0;
} 
