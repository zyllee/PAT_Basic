#include<bits/stdc++.h>
using namespace std;

int main(){
	set<long> s;
	int N;
	cin >> N; 
	//将结果储存在set中，只能插入不同的数 
	for(int i = 1;i <= N;i++)
		s.insert(i / 2 + i / 3 + i / 5);
	printf("%d",s.size());
	return 0;
} 
