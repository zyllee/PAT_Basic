#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,tmp;
	cin >> n >> m;
	int g2;
	for(int i = 0;i < n;i++){
		cin >> g2; 
		int max = 0,min = m,cnt = 0,g1 = 0;
		for(int j = 0;j < n - 1;j++){
			cin >> tmp;
			if(tmp >= 0 && tmp <= m){
				if(max < tmp) max = tmp;
				if(min > tmp) min = tmp;
				g1 += tmp;//×¢ÒâÀÛ¼Ó·ûºÅ 
				cnt++;
			}
		}
		cout << int((((g1 - max - min) *1.0 / (cnt - 2)) + g2) / 2 + 0.5) << endl;
		g1 = 0;
	}
	return 0;
} 

