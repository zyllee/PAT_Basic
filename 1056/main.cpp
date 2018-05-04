/*
给定N个非0的个位数字，用其中任意2个数字都可以组合成1个2位的数字。要求所有可能组合出来的2位数字的和。例如给定2、5、8，则可以组合出：25、28、52、58、82、85，它们的和为330。

输入格式：

输入在一行中先给出N（1<N<10），随后是N个不同的非0个位数字。数字间以空格分隔。

输出格式：

输出所有可能组合出来的2位数字的和。

输入样例：
3 2 8 5
输出样例：
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

