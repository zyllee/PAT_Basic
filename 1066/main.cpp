#include<iostream>
#include<stdio.h>
#define MAXSIZE 500
using namespace std;

int main(){
	int M,N;//�ֱ���
	int A,B;//ɸѡ����
	int tmp;//�滻ֵ 
	cin >> M >> N >> A >> B >> tmp;
	int i,j;
	int image[MAXSIZE][MAXSIZE];
	for(i = 0;i < M;i++)
		for(j = 0;j < N;j++){
			cin >> image[i][j];
		}
	for(i = 0;i < M;i++)
		for(j = 0;j < N;j++){
			if(image[i][j] >= A && image[i][j] <= B){
				image[i][j] = tmp;	
			}
		}
	for(i = 0;i < M;i++)
		for(j = 0;j < N;j++){
			if(j == N - 1 && i != M - 1)
				printf("%03d\n",image[i][j]);
			else if(i == M - 1 && j == N - 1)
				break;
			else 
				printf("%03d ",image[i][j]);
		}
		printf("%03d",image[M - 1][N - 1]);
	return 0;
} 
