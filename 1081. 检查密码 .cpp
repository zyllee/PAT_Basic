#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	getchar();
	string input; 
	for(int i = 0;i < n;i++){
		getline(cin,input);//cin>> 会有一组过不了 
		if(input.size() < 6)
			printf("Your password is tai duan le.\n");
		else{
			int invalid = 0,hasAlpha = 0,hasNum = 0,hasDot = 0;
			for(int j = 0;j < input.size();j++){
				if((input[j]>= 'a' && input[j] <= 'z') || (input[j] >= 'A' && input[j] <= 'Z'))
					hasAlpha = 1;
				else if(input[j] == '.')
					hasDot = 1;
				else if(input[j] >= '0' && input[j] <= '9')
					hasNum = 1;
				else
					invalid = 1;
				
			}
			if(invalid)
				printf("Your password is tai luan le.\n");
			else if(!hasNum && hasAlpha)
				printf("Your password needs shu zi.\n");
			else if(!hasAlpha && hasNum)
				printf("Your password needs zi mu.\n");
			else
				printf("Your password is wan mei.\n");
		}
	}
	return 0;
}
