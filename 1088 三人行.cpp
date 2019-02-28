#include<bits/stdc++.h>
using namespace std;
double m,x,y;
void print(double i){//由于k可能非整数，所以在作为形参进行比较的时候不能用int,否则有一组数据过不了
	if(i > m)~
		printf(" Cong");
	else if(i == m)
		printf(" Ping");
	else
		printf(" Gai");
}
int main(){
	cin >> m >> x >> y;
	int j = 0;
	double k = 0;
	//i代表甲，j代表乙，k代表丙
	for(int i = 99;i >= 10;i--){//颠倒查找，就是按i最大的找
		j = (i % 10) * 10 + i / 10;
		k = abs(i - j) * 1.0 / x;
		if(j == y * k){
			printf("%d",i);
			print(i);print(j);print(k);
			return 0;
		}
	}
	printf("No Solution");
	return 0;
} 
