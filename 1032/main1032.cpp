#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
/* 
typedef struct{
	int pos;
	int score;
}node;
*/ 
int main(){
	int n;
	cin >> n; 
	vector<int> sum(n);
	for(int i = 0;i < n;i++)
		sum[i] = 0;
	int num,score;
	for(int i = 0;i < n;i++){
		cin >> num >> score;
		sum[num] += score;
	}
	int max = sum[1]; 
	int max_pos = 1;
	for(int i = 1;i < n;i++){
		if(sum[i] > max){
			max = sum[i];
			max_pos = i;
		}
	}
	cout << max_pos << " " << max; 
/*	vector<node> team(100000);
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> team[i].pos >> team[i].score;
	}
	vector<int> sum(100000);
	sum[1] = team[0].score;
	int max_pos = team[0].pos;
	int min_pos = team[0].pos;
	for(int i = 0;i < n;i++)
		for(int j = i + 1;j < n;j++){
			if(team[i].pos == team[j].pos){
				sum[team[i].pos] = team[i].score + team[j].score;
			}
			if(team[i].pos > max_pos)
				max_pos = team[i].pos;
			if(team[i].pos < min_pos)
				min_pos = team[i].pos;
		}
	int max_score = sum[min_pos];
	int max_score_pos = min_pos;
	for(int i = min_pos;i < max_pos;i++)
	{
		if(sum[i] > max_score){
			max_score = sum[i];
			max_score_pos = i;
		}
	}
	cout <<  max_score_pos <<" " << max_score;
*/ 
	return 0;
}
