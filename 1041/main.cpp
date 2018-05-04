#include<stdio.h>
#include<iostream>
#define MAXSIZE 1000
using namespace std;
typedef struct{
	char ID[100];
	int test;
	int exam;
} STUDENT;

int main(){
	int n;
	cin >> n;
	STUDENT s[MAXSIZE];
	int i,j;
	for(i = 0;i < n;i++){
		cin >> s[i].ID >> s[i].test >> s[i].exam;
	}
	int index_n;
	int index_pos[MAXSIZE];
	cin >> index_n;
	for(j = 0;j < index_n;j++){
		cin >> index_pos[j];
	}
	for(j = 0;j < index_n;j++)
		for(i = 0;i < n;i++)
		{
			if(index_pos[j] == s[i].test)
				cout << s[i].ID << " " <<s[i].exam << endl;
		}
	return 0;
} 
