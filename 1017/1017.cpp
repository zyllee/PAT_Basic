#include<bits/stdc++.h>
using namespace std;
int main(){
	string A;
	int B,shang;
	cin >> A >> B;
	shang = (A[0] - '0') / B;//��һλ������ 
	if(shang != 0 || A.size() == 1){//���ֻ��һλ����ֱ������� 
		cout << shang;
	}
	int rem = (A[0] - '0') % B;//���� 
	for(int i = 1;i < A.size();i++){
		shang = (rem * 10 + A[i] - '0') / B;
		cout << shang;
		rem = ( rem * 10 + A[i] - '0') % B;
	}
	cout << " " << rem;
	return 0;
}
