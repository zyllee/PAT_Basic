#include<bits/stdc++.h>
using namespace std;
int main(){
	string A;
	int B,shang;
	cin >> A >> B;
	shang = (A[0] - '0') / B;//第一位数的商 
	if(shang != 0 || A.size() == 1){//如果只有一位的数直接输出商 
		cout << shang;
	}
	int rem = (A[0] - '0') % B;//余数 
	for(int i = 1;i < A.size();i++){
		shang = (rem * 10 + A[i] - '0') / B;
		cout << shang;
		rem = ( rem * 10 + A[i] - '0') % B;
	}
	cout << " " << rem;
	return 0;
}
