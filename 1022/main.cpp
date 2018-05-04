#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long A,B;
	int D;
	cin >> A >> B >> D;
	long long sum = A + B;
	vector<int> res;
	int tmp;
	if(sum < 0)
		cout << '-';
	else if(sum == 0){
		cout << '0';
		exit(0);
	}
	while(sum != 0){
		if(sum < 0)
			tmp = -(sum % D);
		else
			tmp = sum % D;
		res.push_back(tmp);
		sum /= D;
	}
	for(vector<int>::reverse_iterator it = res.rbegin();it != res.rend();it++){
		cout << *it;
	}
	return 0;
} 
