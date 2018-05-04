#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int res = 0,cnt_p = 0,cnt_t = 0; 
	for(int i = 0;i < s.size();i++)
		if(s[i] == 'T') cnt_t++;
	for(int i = 0;i < s.size();i++){
		if(s[i] == 'P') cnt_p++;
		if(s[i] == 'T') cnt_t--;
		if(s[i] == 'A') res = (res + (cnt_p * cnt_t) ) % 1000000007;
	}
	cout << res;
	return 0;
}
