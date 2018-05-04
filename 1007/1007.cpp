#include<bits/stdc++.h>
#define MAX 100001
using namespace std;
bool is_prime(int n){
	if(n <= 1)
		return false;
	if(n == 2)
		return true;
	for(int i = 2;i*i <= n;i++){
		if(n % i == 0)
			return false;
	}
	return true;
}
int main(){
	int n;
	cin >> n;
/*	for(int i = 2;i <= n;i++)
		if(is_prime(i))
			cout << i << " ";
*/
	int d;
	int prime[MAX];
	int cnt = 0;
	int res = 0;
	for(int i = 2;i <= n;i++){
		if(is_prime(i)){
			prime[cnt] = i;
			if(cnt >= 1){
				d = prime[cnt] - prime[cnt - 1];
			//	cout << d << endl;
				if(d == 2)
					res++;		
			}
		//	cout << prime[cnt] << endl;
			cnt++;
		}	
	}
	cout << res << endl;

	return 0;
}
