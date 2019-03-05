#include<bits/stdc++.h>
using namespace std;

int main(){
	string A,B,C;
	getline(cin,A);
	getline(cin,B);
	int appear[300] = {0};
	C = A + B;
	for(int i = 0;i < C.size();i++){
		if(!appear[(int)C[i]])
			printf("%c",C[i]);
		appear[(int)C[i]] = 1;
	}
	return 0;
}
