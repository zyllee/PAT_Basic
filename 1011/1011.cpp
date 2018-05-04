#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >> N;
	long long A,B,C;
	for(int i = 0;i < N;i++){
		cin >> A >> B >> C;
		if(A + B > C)
			printf("Case #%d: true\n",i + 1);
		else
			printf("Case #%d: false\n",i + 1);
	}
	return 0;
} 
