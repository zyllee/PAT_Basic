#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	getline(cin,str);
	int sum = 0;
	int i;
	for(i = 0;i < str.length();i++){
//		cout << sum << endl;
		if(str[i] >= 'A' && str[i] <= 'Z')
			sum += (str[i] - 'A' + 1);
		if(str[i] >= 'a' && str[i] <= 'z')
			sum += (str[i] - 'a' + 1);
	}
//	cout << "sum" << sum << endl;
	vector<int> res;
	int left;
	while(sum != 0){
		left = sum % 2;
		res.push_back(left);
		sum /= 2; 
	}
	int cnt_0 = 0;
	int cnt_1 = 0;
	for(i = 0;i < res.size();i++){
//		cout << res[i] << endl;
		if(res[i] == 0)
			cnt_0++;
		else
			cnt_1++;
	}
	cout << cnt_0 << " " << cnt_1;
	return 0;
} 
