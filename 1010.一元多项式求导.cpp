#include<bits/stdc++.h>
using namespace std;

int main(){
	int tp,texp;
	int flag = 0;
	while(cin >> tp >> texp){
		if(texp != 0){
			if(flag) printf(" ");
			printf("%d",tp *texp);
			printf(" %d",texp - 1);
			flag = 1;
		}
	}
	if(!flag) printf("0 0");
	return 0; 
}
