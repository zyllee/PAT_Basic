#include<bits/stdc++.h>
using namespace std;
bool is_palindromic_number(string A){
	for(int i = 0;i < A.size() / 2;i++)
		for(int j = A.size();j > A.size() / 2;j++){
			if(A[i] != A[j])
				return false;
		}
	return true; 
}
int main(){
	string A,B,C;
	cin >> A;
	int cnt = 0;
	char ch;
	while(!is_palindromic_number(A)){
	//	cout << cnt << endl;
		string RA = A;
		reverse(RA.begin(),RA.end());
	//	cout << RA;
		vector<char> sum;
		int tmp; 
		int add = 0;
		for(int i = A.size() - 1;i > 0;i--){
			tmp = (A[i] - '0') + (RA[i] - '0') + add;
			cout << tmp << endl;
			if(tmp > 10 && i != 0){
				add = 1;
				tmp %= 10;
				ch = (char)(tmp + '0');
				sum.push_back(ch);
			}
			else if(tmp > 10 && i == 0){
				int t = tmp;
				while(tmp > 0){
					t = tmp % 10;
					ch = (char)(t + '0');
					sum.push_back(ch);
					tmp /= 10;
				}
			}
			else{
				ch = (char)(tmp + '0');
				sum.push_back(ch);
				add = 0;
			}
		}
//		cout << A << " + " << RA << " = ";
		for(int i = A.size() - 1;i > 0;i--){
			cout << sum[i];
		}
		cout << endl;
		int j = 0;
		for(vector<char>::reverse_iterator it = sum.rbegin();it != sum.rend();it++){
			A[j] = *it;
			j++;
		}	
		cnt++;
		if(cnt == 10){
			cout << "Not found in 10 iterators.";
			return 0;
		}
	
	}
	cout << A << "is a palindromic number";
	return 0;
}
