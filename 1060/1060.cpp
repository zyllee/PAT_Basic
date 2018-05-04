#include<bits/stdc++.h>
using namespace std;
bool descend(int a,int b){ return a > b;}
int main(){
	int n;
	cin >> n;
	int dis[100001];
	for(int i = 1;i <= n;i++){
		scanf("%d",&dis[i]);
	}
	int ans = 0,i = 1;
	sort(dis + 1,dis + n + 1,descend);//不能对vector<int>执行移位 
	while(ans <= n && dis[i] > i){
		ans++;
		i++;
	}
	printf("%d",ans);
	return 0;
} 
