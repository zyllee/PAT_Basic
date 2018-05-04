#include<iostream>
using namespace std;
int main(){
	string s;
	//cin >> s;
	if(s[0] == '-'){
		cout << '-';
	}
	char tmp[s.size()];
	int before_E = 0;
	int E_pos = 0;
	int cnt_0 = 0;
	for(int i = 1;i < s.size();i++){
		if(s[i] != 'E'){
			if(s[i] == '.')
				continue;
			if(s[i] == '0')
				cnt_0++;
			tmp[before_E] = s[i];
			before_E++;
		}
		else{
			E_pos = i;
			break;
		}
	}
	char ex[s.size()];
	int cnt_ex = 0;
	int is_bigger_0 = 1;
	for(int i = E_pos + 1;i < s.size();i++){//¼ÇÂ¼Ö¸Êı 
		if(s[i] == '+')
			is_bigger_0 = 1;
		else if(s[i] == '-')
			is_bigger_0 = -1;
		if(s[i] != '0'){
			ex[cnt_ex] = s[i];
			cnt_ex++;
		}
	}
	int ex_val = 0;
	for(int i = cnt_ex;i > 0;i--){
	} 
	return 0;
}
