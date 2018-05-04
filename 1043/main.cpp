/*给定一个长度不超过10000的、仅由英文字母构成的字符串。请将字符重新调整顺序，按“PATestPATest....”这样的顺序输出，
并忽略其它字符。当然，六种字符的个数不一定是一样多的，若某种字符已经输出完，则余下的字符仍按PATest的顺序打印，直到所有字符都被输出。

输入格式：

输入在一行中给出一个长度不超过10000的、仅由英文字母构成的非空字符串。

输出格式：

在一行中按题目要求输出排序后的字符串。题目保证输出非空。

输入样例：
redlesPayBestPATTopTeePHPereatitAPPT
输出样例：
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
	int cnt[MAXSIZE] = {0};//对P,A,T,e,s,t出现次数进行计数 
	char str[MAXSIZE];
	cin >> str;
	int n = 0;//含有关键字符的总数 
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
	sort(cnt,n);//按其规定次序输出 
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
