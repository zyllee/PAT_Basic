#include<bits/stdc++.h>
using namespace std;
vector<int> num;
bool is_exist(int t){
	for(int i = 0;i < num.size();i++){
		if(t == num[i])
			return true;
	}
	return false;
}
bool descend(int i,int j){ return i > j;}
int main(){
	int k;
	cin >> k;
	int t;
	map<int,bool> is_key;
	for(int i = 0;i < k;i++){// 输入 
		scanf("%d",&t);
		num.push_back(t);
	}
	for(int i = 0;i < k;i++){//初始化全为关键字 
		is_key[num[i]] = true;	
	}
	for(int i = 0;i < k;i++){//筛选出不是关键字的 
		if(is_key[num[i]]){
			if(num[i] % 2 == 0){
				t = num[i] / 2;
				while(t != 1){ 
					if(is_exist(t))
						is_key[t] = false;
					if(t % 2 == 0)
						t = t / 2;
					else
						t = (3 * t + 1) / 2;
				}
			}
			else{
				t = (3 * num[i] + 1) / 2;
                while(t != 1){ 
					if(is_exist(t))
						is_key[t] = false;
					if(t % 2 == 0)
						t = t / 2;
					else
						t = (3 * t + 1) / 2;
				}
			}
		}
	}
	vector<int> res;
	for(int i = 0;i < num.size();i++)
		if(is_key[num[i]])
			res.push_back(num[i]);
	sort(res.begin(),res.end(),descend); 
	printf("%d",res[0]);
	for(int i = 1;i < res.size();i++)
		printf(" %d",res[i]);
	return 0;
}
