#include<bits/stdc++.h>
using namespace std;

string add(string a){
	string b = a,sum;
	reverse(b.begin(),b.end());
	int num = 0,carry = 0;//num����ÿλ��ӵõ�������carry�ǽ�λ�� 
	for(int i = 0;i < b.size();i++){
		num = a[i] - '0' + b[i] - '0' + carry;
		carry = 0;
		if(num >= 10){
			carry = 1;
			num -= 10;
		}
		sum += char(num + '0');
	}
	if(carry == 1)
		sum += '1';
	reverse(sum.begin(),sum.end());//���ʱ�ɸ�λ����λ���ó������跴ת 
	return sum;
}
int main(){
	string a,b;
	cin >> a;
	int cnt = 0;
	while(cnt < 10){
		b = a;
		reverse(b.begin(),b.end());
		if(a == b){
			cout << a << " is a palindromic number." <<endl;
			break;
		}
		else{
			cout << a << " + " << b << " = " << add(a) <<endl;
			a = add(a);
			cnt++;
			}
	}
	if(cnt == 10)
		cout << "Not found in 10 iterations." << endl;
	return 0;
}
