#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<int> num;
	set<int> dis;
	vector<int> cnt(N,0);
	map<int,int> pos;
	vector<int> ans;
	int tmp,tmp_dis;
	for(int i = 0;i < N;i++){
		cin >> tmp;
		num.push_back(tmp);
		tmp_dis = abs(tmp-(i + 1));
		if(tmp_dis >= 2)
			dis.insert(tmp_dis);
		cnt[tmp_dis]++;
		pos[tmp_dis] = cnt[tmp_dis]; 
	}
	for(set<int>::reverse_iterator it = dis.rbegin();it != dis.rend();it++)
			cout <<  *it  << " " << pos[*it] << endl;
	return 0;
} 
