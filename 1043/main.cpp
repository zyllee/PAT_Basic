/*����һ�����Ȳ�����10000�ġ�����Ӣ����ĸ���ɵ��ַ������뽫�ַ����µ���˳�򣬰���PATestPATest....��������˳�������
�����������ַ�����Ȼ�������ַ��ĸ�����һ����һ����ģ���ĳ���ַ��Ѿ�����꣬�����µ��ַ��԰�PATest��˳���ӡ��ֱ�������ַ����������

�����ʽ��

������һ���и���һ�����Ȳ�����10000�ġ�����Ӣ����ĸ���ɵķǿ��ַ�����

�����ʽ��

��һ���а���ĿҪ������������ַ�������Ŀ��֤����ǿա�

����������
redlesPayBestPATTopTeePHPereatitAPPT
���������
PATestPATestPTetPTePePee
*/
#include<stdio.h>
#include<iostream>
#include<string.h>
#define MAXSIZE 10000
using namespace std;

void sort(int cnt[],int n){
/*	for(int i = 0;i < n;i++)
		for(int j = i + 1;j < n;j++){
			if(num[i] > num[j])
				swap(&(num[i]),&(num[j]));
		}
*/
	for(int i = 0;i < n;i++){
		if(cnt[1] != 0){
			cout << 'P';
			cnt[1]--;	
		}
		if(cnt[2] != 0){
			cout << 'A';
			cnt[2]--;	
		}
		if(cnt[3] != 0){
			cout << 'T';
			cnt[3]--;	
		}
		if(cnt[4] != 0){
			cout << 'e';
			cnt[4]--;	
		}
		if(cnt[5] != 0){
			cout << 's';
			cnt[5]--;	
		}
		if(cnt[6] != 0){
			cout << 't';
			cnt[6]--;	
		}
	}
}
int  main(){
	int cnt[MAXSIZE] = {0};//��P,A,T,e,s,t���ִ������м��� 
	char str[MAXSIZE];
	cin >> str;
	int n = 0;//���йؼ��ַ������� 
	for(int i = 0;i < strlen(str);i++){
		switch(str[i]){
			case 'P':cnt[1]++;n++;break;
			case 'A':cnt[2]++;n++;break;
			case 'T':cnt[3]++;n++;break;
			case 'e':cnt[4]++;n++;break;
			case 's':cnt[5]++;n++;break;
			case 't':cnt[6]++;n++;break;
			default:
				continue;
		}
	}
	sort(cnt,n);//����涨������� 
/*	for(int i = 0;i < n;i++){
		switch(pos[i]){
			case 1:cout << 'P';break;
			case 2:cout << 'A';break;
			case 3:cout << 'T';break;
			case 4:cout << 'e';break;
			case 5:cout << 's';break;
			case 6:cout << 't';break;
		}
	}
*/
	return 0;
}
