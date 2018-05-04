#include<stdio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#define MAXSIZE 100
using namespace std;

int main(){
	char A[MAXSIZE];
	char B[MAXSIZE];
	char D_A;
	char D_B;
	int cnt_A = 0;
	int cnt_B = 0;
	int i,j;
	cin >> A >> D_A >> B >> D_B;
	for(i = 0;i < strlen(A);i++){
		if(A[i] == D_A)
			cnt_A++;
	}
	for(j = 0;j < strlen(B);j++){
		if(B[j] == D_B)
			cnt_B++;
	}
	int d_a = D_A - '0';
	int d_b = D_B - '0';
	int P_A = 0;
	int P_B = 0;
	for(i = 0;i <= cnt_A;i++){
		P_A += d_a * pow(10,cnt_A -i - 1);
	}
	for(i = 0;i <= cnt_B;i++){
		P_B += d_b * pow(10,cnt_B - i - 1);
	}
	cout << P_A + P_B ;
	return 0;
} 
