#include<bits/stdc++.h>
using namespace std;
int  main(){
	string A;
	int B;
	cin >> A >> B;
	int rem = (A[0] - '0') % B;
	for(int i = 1;i < A.size();i++){
		int shang = (rem * 10 + A[i] - '0') / B;
		cout << shang;
		rem = (rem * 10 + A[i] - '0') % B; 
	} 
	return 0;
} 
