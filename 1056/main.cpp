/*
����N����0�ĸ�λ���֣�����������2�����ֶ�������ϳ�1��2λ�����֡�Ҫ�����п�����ϳ�����2λ���ֵĺ͡��������2��5��8���������ϳ���25��28��52��58��82��85�����ǵĺ�Ϊ330��

�����ʽ��

������һ�����ȸ���N��1<N<10���������N����ͬ�ķ�0��λ���֡����ּ��Կո�ָ���

�����ʽ��

������п�����ϳ�����2λ���ֵĺ͡�

����������
3 2 8 5
���������
330
*/
#include<stdio.h>
#include<iostream>
using namespace std;
int add(int num[],int n){
	int sum = 0;
	for(int i = 0;i < n;i++)
		for(int j = i + 1;j < n;j++){
			sum += (10 * num[i] + num[j]) + (10*num[j] + num[i]);
		}
	return sum;
}
int main(){
	int n;
	int num[100];
	cin >> n;
	for(int i = 0;i < n;i++)
		cin >> num[i];
	cout << add(num,n);
	return 0;
}

