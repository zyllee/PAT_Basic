#include<bits/stdc++.h>
using namespace std;

int main(){
	int tp,texp;
	scanf("%d%d",&tp,&texp);
	if(texp != 0) 
		printf("%d %d",tp * texp,texp - 1);
	else{
		printf("0 0");
	    exit(0);
	}
	int i = -1;
	int flag = 0;
	do{
		scanf("%d%d",&tp,&texp);
		if(texp == 0)
			break;
		printf(" %d",tp *texp);
		printf(" %d",texp - 1);
		i++;
	}while(texp != 0);
	return 0; 
}
