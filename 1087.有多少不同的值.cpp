#include<bits/stdc++.h>
using namespace std;

int main(){
	set<long> s;
	int N;
	cin >> N; 
	//�����������set�У�ֻ�ܲ��벻ͬ���� 
	for(int i = 1;i <= N;i++)
		s.insert(i / 2 + i / 3 + i / 5);
	printf("%d",s.size());
	return 0;
} 
