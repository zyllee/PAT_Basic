#include<bits/stdc++.h>
using namespace std;

int main(){
	int k,m,res,find = 0;
	cin >> m;
	for(int i = 0;i < m;i++){
		cin >> k;
		int t1 = k;
		int cnt = 0;
		while(t1){
			t1 /= 10;
			cnt++;
		}
//		cout << "cnt:" << cnt <<endl;
		for(int n = 1;n < 10;n++){
			res = n * (k * k);
			int res_t = res,cnt2 = 0,t2 = 0;
			while(cnt){
				t2 += res_t % 10 * pow(10,cnt2);
				res_t /= 10;
				cnt--; 
				cnt2++;
			}
			cout << "t:" << t2 << endl;
			if(t2 == k){
//				cout << "t:" << t2 << endl;
				printf("%d %d\n",n,res);	
				find = 1;
			}
		}
		if(!find)
			printf("No\n");
		find = 0;
	}
	return 0;
} 
