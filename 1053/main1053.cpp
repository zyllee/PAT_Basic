#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main(){
	int n,D;
	double e;
	cin >> n >> e >> D;
//	cout << "n:" << n << endl;
//	cout << "e:" << e << endl;
//	cout << "D:" << D << endl;
	int day;
	int must = 0;
	int maybe = 0;
	int i,j;
	double tmp;
	for(i = 0;i < n;i++){
		cin >> day;
		int cnt = 0;
		//cout << "day:" << day << endl;
		//vector<double> usage(day);
		for(j = 0;j < day;j++){
			//cin >> usage[j];
			cin >> tmp;
			if(tmp < e)	cnt++;
		}
		if(cnt > (day / 2)){
			day > D ? must++ : maybe++;//判断条件为观察期时间day大于观察期阈值 
		}
	}
	double must_res = (double)must / n * 100;
	double maybe_res = (double)maybe / n * 100;
	printf("%.1f%% %.1f%%",maybe_res,must_res);
	return 0;
} 
