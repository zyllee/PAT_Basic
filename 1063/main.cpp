/*����ѧ�У�����ġ��װ뾶����ָ������ֵ��ģ���ϵ���ȷ�硣
����֮�����ڸ�����n�������ռ������ֵ{a1+b1i, ..., an+bni}�����ǵ�ģΪʵ�����鲿��ƽ���͵Ŀ����������װ뾶���������ģ��

���ڸ���һЩ�����ռ������ֵ��������㲢�����Щ����ֵ���װ뾶��

�����ʽ��

�����һ�и���������N��<= 10000�������������ֵ�ĸ��������N�У�ÿ�и���1������ֵ��ʵ�����鲿��
����Կո�ָ���ע�⣺��Ŀ��֤ʵ�����鲿��Ϊ����ֵ������1000��������

�����ʽ��

��һ��������װ뾶���������뱣��С�����2λ��

����������
5
0 1
2 0
-1 0
3 3
0 -3
���������
4.24
*/ 
#include<stdio.h>
#include<math.h> 
#include<iostream>
#define MAXSIZE 100000
using namespace std;

void find_max(double r[],int n){
	double max;
	for(int i = 0;i < n;i++){
		if(r[i] > max)
			max = r[i];
	}
	printf("%.2lf",max);
}
int main() {
	int n;
	cin >> n;
	int real[MAXSIZE];
	int imagine[MAXSIZE];
	double r[MAXSIZE];
	for(int i = 0;i < n;i++){
		cin >> real[i] >> imagine[i];
		r[i] = (double)sqrt(pow(real[i],2) + pow(imagine[i],2));
	}
	find_max(r,n);
	return 0;
}
