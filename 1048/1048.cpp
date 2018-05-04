#include<bits/stdc++.h>
using namespace std;

int main(){
	string A,B;
	cin >> A >> B;
	reverse(A.begin(),A.end());
	reverse(B.begin(),B.end());
	string res;
	if(A.length() > B.length())//²¹È«½Ï¶ÌµÄ×Ö·û´® 
		B.append(A.length() - B.length(),'0');
	else
		A.append(B.length() - A.length(),'0'); 
	char str[13] = {'0','1','2','3','4','5','6','7','8','9','J','Q','K'};
	for(int i = 0;i < A.size();i++){
		if(i % 2 == 0){
				res += str[(A[i] - '0' + B[i] - '0') % 13];
		}
		else{
			int tmp = B[i] - A[i];
			if(tmp < 0)  
				tmp += 10;
				res += str[tmp];
		}	
	}
	reverse(res.begin(),res.end());
	for(int i = 0;i < res.size();i++)
		printf("%c",res[i]);
	return 0;
}
