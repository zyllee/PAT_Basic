/* �ж�������кܼ򵥣������Ҫ����д���򵥵ĳ��������ʦ���Ⲣͳ��ѧ�����ж���ĵ÷֡�

�����ʽ��

�����ڵ�һ�и�������������100��������N��M���ֱ���ѧ���������ж����������ڶ��и���M��������5����������
��ÿ���������ֵ�������и���ÿ�����Ӧ����ȷ�𰸣�0�����ǡ���1�����ǡ������N�У�ÿ�и���һ��ѧ���Ľ�����ּ���Կո�ָ���

�����ʽ��

���������˳�����ÿ��ѧ���ĵ÷֣�ÿ������ռһ�С�

����������
3 6
2 1 3 3 4 5
0 0 1 0 1 1
0 1 1 0 0 1
1 0 1 0 1 0
1 1 0 0 1 1
���������
13
11
12
*/
#include<stdio.h>
#include<iostream>
#define MAXSIZE 100
using namespace std;
void judge_test(int (*ans)[MAXSIZE],int standard[],int score[],int per_test_score[],int stu_amount,int test_amount){
	for(int i = 0;i < stu_amount;i++)
		for(int j = 0;j < test_amount;j++){
			if(ans[i][j] == standard[j])
				score[i] += per_test_score[j];
		}
	return ;
}
int main(){
	int stu_amount;
	int test_amount;
	cin >> stu_amount >> test_amount;
	int per_test_score[MAXSIZE];
	int ans[MAXSIZE][MAXSIZE];
	int standard[MAXSIZE];
	int score[MAXSIZE];
	for(int i = 0;i < test_amount;i++)
		cin >> per_test_score[i];
	for(int i = 0;i < test_amount;i++)
		cin >> standard[i];	
	for(int i = 0;i < stu_amount;i++)
		for(int j = 0;j < test_amount;j++){
			cin >> ans[i][j];
		}
	judge_test(ans,standard,score,per_test_score,stu_amount,test_amount);
	for(int i = 0;i < stu_amount;i++){
		cout << score[i] << endl;
	}
	return 0;
}
