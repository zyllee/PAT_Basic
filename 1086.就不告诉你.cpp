#include<bits/stdc++.h>
using namespace std;

int main(){
	long A,B,res,tmp;
	cin >> A >> B;
	res = A * B;
	stringstream ss;
	ss << res;
	string ans = ss.str();
	reverse(ans.begin(),ans.end());
	//由于使用dev,仅支持c98标准，所以需要将string转为char数组，用printf输出可以去掉前面的0 
	char *c_str = new char [ans.length() + 1];
	strcpy(c_str,ans.c_str());
	printf("%d",atoi(c_str));
	//取余数输出前面有零 
//	while(res){
//		tmp = res % 10;
//		printf("%d",tmp);
//		res /= 10; 
//	}	
	return 0;
}
