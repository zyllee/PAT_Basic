#include<bits/stdc++.h>
using namespace std;

int  main(){
	int n;
	scanf("%d",&n);
	double arr[n];
	double tmp;
	double s = 0.0;
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		s += (i + 1)   * arr[i] * (n - i);//ÕÒ¹æÂÉ 
	}
	printf("%.2f",s);
	return 0;
}
