#include<stdio.h>
#include<iostream>
#define MAXSIZE 1000
using namespace std;

int main(){
	int n;
	cin >> n;
	int team_ID;
	int person_ID;
	int score = 0;
	int sum[MAXSIZE] = {0};
	int i;
	for(i = 0;i < n;i++){
		scanf("%d%*c%d%d",&team_ID,&person_ID,&score);//%*c?????
		sum[team_ID] += score;
	}
	int max_score = 0;
	int max_team_ID = 0;
	for(i = 0;i < MAXSIZE;i++){
		if(sum[i] != 0 && sum[i] > max_score){	
			max_team_ID = i;
			max_score = sum[i];
		}
	}
	cout << max_team_ID << " "<< max_score;
	return 0;
}
