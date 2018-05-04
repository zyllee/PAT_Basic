#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
#define MAXSIZE 1000
using namespace std;

int main(){
	char sell[MAXSIZE];
	char want[MAXSIZE];
	gets(sell);
	gets(want);
	char capital[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lower[] =   "abcdefghijklmnopqrstuvwxyz";
	char num[] =     "0123456789";
	int c_cnt_sell[26] = {0};
	int l_cnt_sell[26] = {0};
	int n_cnt_sell[10] = {0};
	int c_cnt[26] = {0};
	int l_cnt[26] = {0};
	int n_cnt[10] = {0};
	int i,j;
	int lack = 0;
	int left = 0;
	for(i = 0;i < strlen(sell);i++){
		for(j = 0;j < 26;j++){
			if(sell[i] == capital[j])
				c_cnt_sell[j]++;
		}
		for(j = 0;j < 26;j++){
			if(sell[i] == lower[j])
				l_cnt_sell[j]++;
		}
		for(j = 0;j < 10;j++){
			if(sell[i] == num[j])
				n_cnt_sell[j]++;
		}
	} 
	for(i = 0;i < strlen(want);i++){
		for(j = 0;j < 26;j++){
			if(want[i] == capital[j])
				c_cnt[j]++;
		}
		for(j = 0;j < 26;j++){
			if(want[i] == lower[j])
				l_cnt[j]++;
		}
		for(j = 0;j < 10;j++){
			if(want[i] == num[j])
				n_cnt[j]++;
		}
	}
	for(i = 0;i < 26;i++){	
		if(c_cnt_sell[i] - c_cnt[i] < 0){
			lack += abs(c_cnt_sell[i] - c_cnt[i]);
		}
		else{
			left += c_cnt_sell[i] - c_cnt[i];
		}
	}
	for(i = 0;i < 26;i++){	
		if(l_cnt_sell[i] - l_cnt[i] < 0){
			lack += abs(l_cnt_sell[i] - l_cnt[i]);
		}
		else{
			left += l_cnt_sell[i] - l_cnt[i];
		}
	}
//	cout << n_cnt_sell[7] << endl;
//	cout << n_cnt[7] << endl;	
	for(i = 0;i < 10;i++){	
		if(n_cnt_sell[i] - n_cnt[i] < 0){
			lack += abs(n_cnt_sell[i] - n_cnt[i]);
		}
		else{
			left += n_cnt_sell[i] - n_cnt[i];
		}
	}
	if(lack > 0)
		cout << "No" << " " << lack;
	else
		cout << "Yes" << " " << left;
	return 0; 
}

