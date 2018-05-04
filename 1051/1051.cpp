#include<bits/stdc++.h>
using namespace std;

int main(){
	double r1,p1,r2,p2;
	cin >> r1 >> p1 >> r2 >> p2;
	double A,B;
	A = r1*cos(p1)*r2*cos(p2) - r1*r2*sin(p1)*sin(p2);
	B = r1*cos(p1)*r2*sin(p2) + r1*sin(p1)*r2*cos(p2);
	if(A < 0 && A >= -0.009)//·Ö¿ªA,BÊä³ö 
		printf("0.00");
	else
		printf("%.2f",A);
	if(B < 0 && B >= -0.009)
		printf("+0.00i");
	else if(B >= 0) 
		printf("+%.2fi",B);
	else 
		printf("%.2fi",B);
	return 0;
}
