#include<bits/stdc++.h>
using namespace std;

int main(){
	int k,m,res,find = 0;
	cin >> m;
	for(int i = 0;i < m;i++){
		cin >> k;
		int t1 = k;
		int cnt = 0;
		//判断输入数的位数
		while(t1){
			t1 /= 10;
			cnt++;
		}
//		cout << "cnt:" << cnt <<endl;
		for(int n = 1;n < 10;n++){
			res = n * (k * k);//题目中要求的式子
			int res_t = res,cnt_t = cnt,cnt2 = 0,t2 = 0;
			//判断末尾几个数
			while(cnt_t){
				t2 += res_t % 10 * pow(10,cnt2);
				res_t /= 10;
				cnt_t--; 
				cnt2++;
			}
//			cout << "t:" << t2 << endl;
			//如果末尾几个数和输入的k相等，就为自守数
			if(t2 == k){
//				cout << "t:" << t2 << endl;
				printf("%d %d\n",n,res);	
				find = 1;
				break;
			}
		}
		if(!find)
			printf("No\n");
		find = 0;
	}
	return 0;
} 
