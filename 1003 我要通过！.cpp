#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	for(int i = 0;i < n;i++){
		cin >> s;
		map<char,int> m;
		int p = 0,t = 0,find = 0;
		for(int j = 0;j < s.size();j++){
			m[s[j]]++;
			if(s[j] == 'P') p = j;
			if(s[j] == 'T') t = j;	
		}
		if(m['P'] == 1 && m['T'] == 1 && m['A'] != 0 && m.size() == 3 && t - p != 1 && p*(t - p - 1) == s.size() - t - 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
