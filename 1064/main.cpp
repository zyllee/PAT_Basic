#include<stdio.h>
#include<iostream>
#define MAXSIZE 10000
using namespace std;

int main(){
	int cnt;
	cin >> cnt;
	int num[MAXSIZE];
	int i,j;
	int arr[MAXSIZE];
	int sum[MAXSIZE] = {0};
	for(i = 0;i < cnt;i++){
		cin >> num[i];
	}
	//分离位数 
	for(i = 0;i < cnt;i++){
		j = 0;
		while(num[i] != 0){
			arr[j] = num[i] % 10;
			sum[i] += arr[j];
			num[i] /= 10;
			j++;
		}
	}
//	for(int i = 0;i < cnt;i++)
//		cout << sum[i] << " ";
//	int friends = 0; 
//	int f[MAXSIZE] = {0};
	int tmp = 0;
	int repeat = 0;
	//统计朋友数 
	for(i = 0;i < cnt;i++)
		for(j = i + 1;j < cnt;j++){
			if(sum[i] > sum[j]){
				tmp = sum[i];
				sum[i] = sum[j];
				sum[j] = tmp; 
			}
			if(sum[i] == sum[j]){
				sum[j] = 0;
				repeat++;
			}
		}
//		cout << cnt <<endl;
//		cout << repeat << endl;
//		cout << cnt - repeat<<endl;
	//计算结果个数 
	int result_cnt = 0; 
	for(i = 0;i < cnt;i++){
		if(sum[i] != 0){
			result_cnt++;
		}
	}
	//输出结果的个数 
	cout << result_cnt << endl;
	result_cnt = 0;
	//输出不同朋友数 
	for(i = 0;i < cnt;i++){
		if(result_cnt == cnt - repeat)
			break;
		if(sum[i] != 0){
			cout << sum[i] << " ";
			result_cnt++;
		}
	}
	for(;i < cnt;i++){
		if(sum[i] != 0){
			cout <<sum[i];
		}
	}
	return 0;
}
