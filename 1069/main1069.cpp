#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<string> name;
	int M,N,S;
	cin >> M >> N >> S;
	string tmp;
	map<string,bool> mp;
	for(int i = 0;i < M;i++){
		cin >> tmp;
		name.push_back(tmp);
		mp[name[i]] = false;
	}
	if(S > M){//起始点大于数组容量，则没有人中奖 
		cout << "Keep going...";
		return 0; 
	}
	int i = S - 1;
	while(i < M){
		if(mp[name[i]])
			i++;
		else{
			cout << name[i] << endl;
			mp[name[i]] = true;
			i += N;
		} 
	} 
	return 0;
}
