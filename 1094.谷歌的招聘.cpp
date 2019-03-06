#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num){
	int i,x = (int)sqrt(num);
	if (num == 0 || num == 1) return false;
	for(i = 2;i <= x;i++)
		if(num % i == 0) return false;
	return true;
}
int main(){
	string s,sub;
	int l,k;
	cin >> l >> k >> s;
	for(int i = 0;i <= l - k;i++){
		string sub = s.substr(i , k);
		long long num = atoll(sub.c_str());
		if(isPrime(num)){
			printf("%s",sub.c_str());
			return 0;
		}
	}
	printf("404");
	return 0;
}
