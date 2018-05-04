#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >> N;
	vector<int> score(N);
	vector<int> hash(100000); 
	for(int i = 0;i < N;i++){
		cin >> score[i];
		hash[score[i]]++;
	}
	int K;
	cin >> K;
	int search; 
	for(int i = 0;i < K;i++){
		cin >> search;
		if(i != 0)
			cout << " " << hash[search];
		else
			cout << hash[search]; 
	}
/*	for(int i = 0;i < N;i++)
		for(int j = 0;j < K;j++){
			if(score[i] == search[j])
				cnt[j]++;
		}
 
	for(int i = 0;i < K - 1;i++){
		printf("%d ",cnt[i]);
	}
	printf("%d",cnt[K - 1]);
*/ 
	return 0;
}
