/*����n��ѧ����������ѧ�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ����������ѧ�š�

�����ʽ��ÿ�������������1��������������ʽΪ

  ��1�У�������n
  ��2�У���1��ѧ�������� ѧ�� �ɼ�
  ��3�У���2��ѧ�������� ѧ�� �ɼ�
  ... ... ...
  ��n+1�У���n��ѧ�������� ѧ�� �ɼ�
����������ѧ�ž�Ϊ������10���ַ����ַ������ɼ�Ϊ0��100֮���һ�����������ﱣ֤��һ�����������û������ѧ���ĳɼ�����ͬ�ġ�
�����ʽ����ÿ�������������2�У���1���ǳɼ����ѧ����������ѧ�ţ���2���ǳɼ����ѧ����������ѧ�ţ��ַ�������1�ո�
*/
#include<stdio.h>
#include<iostream>
#include<string.h>
#define MAXSIZE 100
using namespace std;
typedef struct{
	char name[MAXSIZE];
	char num[MAXSIZE];
	int score; 
}STUDENT,*PSTUDENT;

int main(){
	STUDENT s[MAXSIZE],lowest,highest;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> s[i].name >> s[i].num >> s[i].score;
	}
	highest = lowest = s[0];
	for(int i = 0;i < n;i++){
		if(s[i].score > highest.score){
			highest.score = s[i].score;
			strcpy(highest.name,s[i].name);
			strcpy(highest.num,s[i].num);
		}
		if(s[i].score < lowest.score){
			lowest.score = s[i].score;
			strcpy(lowest.name,s[i].name);
			strcpy(lowest.num,s[i].num);
		}
	}
	cout << highest.name << " " << highest.num <<endl;
	cout << lowest.name  << " " << lowest.num;
	return 0;
} 
