#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> couple(100000,-1);
	int a,b;
	for(int i = 0;i < n;i++){
		scanf("%d%d",&a,&b);
		couple[a] = b;
		couple[b] = a;
	}
	int m;
	cin >> m;
	vector<int> guest(m),isExsit(100000);
	for(int i = 0;i < m;i++){
		scanf("%d",&guest[i]);
		if(couple[guest[i]] != -1)//��ĳ���ж������ö�����ڣ�������ڲ�Ӱ��֮��Ĳ��ҵ�������Ϊguest�д��ڵ���ĳ�� 
			isExsit[couple[guest[i]]] = 1;
	}
	set<int> res;
	for(int i = 0;i < m;i++)
		if(!isExsit[guest[i]])
			res.insert(guest[i]);
	cout << res.size() << endl;
	for(set<int>::iterator it = res.begin();it != res.end();it++){
		if(it != res.begin())	printf(" ");
		printf("%05d",*it);
	}
	return 0;
}
