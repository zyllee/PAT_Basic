/*��������0-9�����ɸ��������������˳��������Щ���֣�������ȫ��ʹ�á�
Ŀ����ʹ�����õ�����������С��ע��0��������λ�������磺��������0������1������5��һ��8�����ǵõ�����С��������10015558��

�ָ������֣����д��������ܹ���ɵ���С������

�����ʽ��

ÿ���������1������������ÿ������������һ���и���10���Ǹ�������
˳���ʾ����ӵ������0������1����������9�ĸ�������������һ���ո�ָ���10�����ֵ��ܸ���������50��������ӵ��1����0�����֡�

�����ʽ��

��һ��������ܹ���ɵ���С������

����������
2 2 0 0 0 3 0 0 1 0
���������
10015558*/
#include<stdio.h>
#include<iostream>
#include<string.h>
#define MAXSIZE 100
using namespace std;

int main(){
	int i;
	int cnt[10] = {0};
	int sum = 0;
	for(i = 0;i < 10;i++){
		scanf("%d%*c",&(cnt[i]));
		sum += cnt[i];
	}
	int j;
	for(i = 0;i < sum;i++){
		for(j = 1;j <=9;j++){//�����һλ��ԭ���ǳ����������С��һ��������ֻ����һ�� 
			if(cnt[j] != 0){
				cout << j;
				cnt[j]--;
				break;
			}
		}
		while(cnt[0] != 0){//����ڶ�λ�Ժ��������ʹ������ 
			cout << '0';
			cnt[0]--;
		}
		while(j <= 9){//������С�������������ÿ�����ֶ�Ҫ��ȫ���������ת��һ���Դ�һ����� 
			while(cnt[j] != 0){
				cout << j;
				cnt[j]--;
			}
			j++;
		}
	}
	return 0;
}