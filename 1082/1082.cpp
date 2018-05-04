#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int id,x,y;
	int max_id,min_id,tmp,max = -1,min = 99999;
	for(int i = 0;i < n;i++){
		cin >> id >> x >> y;
		tmp = x * x + y * y;
		if(tmp >= max){ 
			max_id = id;
			max = tmp;
		}
		if(tmp <= min){
			min_id = id;
			min = tmp;
		}
	} 
	printf("%04d %04d",min_id,max_id); 
	return 0;
} 
