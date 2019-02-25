#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int N,k;
	cin >> s >> N;
	for(int i = 1;i < N;i++){
		string t;
		for(int j = 0;j < s.length();j = k){
			for(k = j;k < s.length() && s[j]==s[k];k++);//计算第j个数字的重复个数 
			//将重复个数转为字符串 
			stringstream ss; 
			ss << (k - j);
			string repeat = ss.str();
			t += s[j] + repeat;//添加到一个暂时的字符串
		}
		s = t;//将结果赋给第i项
	}
	cout << s << endl;
	return 0;
}

