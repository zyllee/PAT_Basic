#include<bits/stdc++.h>
using namespace std;
bool inscend(string a,string b){ return a < b;}
int main(){
	string a,b;
	int n;
	cin >> n;
	map<string,string> coupled;//想复杂了，可以用int储存 
	for(int i = 0;i < n;i++){
		cin >> a >> b;
		coupled[a] = b;
		coupled[b] = a;
	}
	int m;
	cin >> m;
	vector<string> totalp(m);
	for(int i = 0;i < m;i++){
		cin>> totalp[i];
	}
	int cnt = 0;
	for(int i = 0;i < m;i++)
		for(int j = i + 1;j < m;j++){
			if(totalp[i] == "#")
				continue; 
			if(coupled[totalp[i]] == totalp[j]){
				totalp[i] = "#";
				totalp[j] = "#";
				cnt += 2;
			}
		}
	cout << m - cnt << endl;
	int flag = 0;
	vector<string> res(m - cnt);
	int len_res = 0;
	for(int i = 0;i < m;i++){
		if(totalp[i] != "#"){
			res[len_res] = totalp[i];
			len_res++;
		}
	}
	sort(res.begin(),res.end(),inscend);
	cout << res[0];
	for(int i = 1;i < res.size();i++)
		cout << " " <<res[i];
	return 0;
} 
