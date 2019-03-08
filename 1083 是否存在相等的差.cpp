#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	set<int> dis;
	vector<int> cnt(10000,0);
	int tmp,tmp_dis;
	for(int i = 1;i <= N;i++){
		cin >> tmp;
		tmp_dis = abs(tmp- i);
		dis.insert(tmp_dis);
		cnt[tmp_dis]++;
	}
	for(set<int>::reverse_iterator it = dis.rbegin();it != dis.rend();it++)
		if(cnt[*it] >= 2) cout <<  *it  << " " << cnt[*it] << endl;
	return 0;
} 
