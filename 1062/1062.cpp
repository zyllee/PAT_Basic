#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
	return b == 0 ? a : GCD(b,a % b); 
}
int main(){
	double n1,m1,n2,m2;
	int k;
	scanf("%lf/%lf %lf/%lf %d",&n1,&m1,&n2,&m2,&k);
	int x1,x2;
	x1 = ((k*n1) / m1) < ((k * n2) / m2) ? ceil((k*n1) / m1) : ceil((k*n2) / m2);
	x2 = ((k*n1) / m1) > ((k * n2) / m2) ? floor((k*n1) / m1) : floor((k*n2) / m2);
	printf("%d/%d",x1,k);
	for(int i = x1 + 1;i <= x2;i++){
		if(GCD(i,k) == 1)
			printf(" %d/%d",i,k);
	}
	return 0;
}
