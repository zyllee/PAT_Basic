#include<stdio.h>
#include<vector>
#include<string.h>
#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	getchar();//������ո� 
	int i,j;
	char choice;
	char judge;
	vector<int> ans;
	for(i = 0;i < n;i++){
		for(j = 0;j < 4;j++){
			scanf("%c%*c%c",&choice,&judge);
//			cout << judge<< endl;
			getchar();//������ո� 
			if(judge == 'T'){
//				cout << choice <<endl;
				switch(choice){
					case'A':ans.push_back(1);break;
					case'B':ans.push_back(2);break;
					case'C':ans.push_back(3);break;
					case'D':ans.push_back(4);break;
				}
			}
		}
	}
	for(vector<int>::iterator it = ans.begin();it != ans.end();it++){
		cout << *it;
	}
	return 0;
} 
/*
������΢����������һ����Ƭ������λ�װ���ͬѧ�ǣ����ڴ����ʱ��Ҫʹ��wifi�����µ������ǵ�ѧϰ����
��wifi��������Ϊ������ѧ��𰸣�A-1��B-2��C-3��D-4����ͬѧ���Լ�����ÿ����һ����лл��������~��
���� ��ʦ��Ϊ�˴ٽ�ѧ��ѧϰҲ��ƴ�ˡ��� �����Ҫ����д�����һϵ����Ŀ�Ĵ𰸰��վ����ϸ����Ķ�Ӧ��ϵ�����wifi�����롣
����򵥼���ÿ��ѡ���ⶼ��4��ѡ�����ֻ��1����ȷ�𰸡� 
�����ʽ��

�����һ�и���һ��������N��<= 100�������N�У�ÿ�а��ա����-�𰸡��ĸ�ʽ����һ�����4��ѡ���T����ʾ��ȷѡ���F����ʾ����ѡ�ѡ����ÿո�ָ���

�����ʽ��

��һ�������wifi���롣

����������
8
A-T B-F C-F D-F
C-T B-F A-F D-F
A-F D-F C-F B-T
B-T A-F C-F D-F
B-F D-T A-F C-F
A-T C-F B-F D-F
D-T B-F C-F A-F
C-T A-F B-F D-F
���������
13224143*/ 
