#include<bits/stdc++.h>
using namespace std;

bool cmp(long long i,long long j){
	return i > j;
}
int main(){
	int n,m;
	long long t;
	cin >> n >> m;
	vector<vector<long> > saleInCity(m);
	vector<long> sale; 
	map<long,vector<int> > index; 
	for(int i = 0;i < m;i++)
	{
		for(int j = 0;j < n;j++)
		{
			scanf("%lld",&t);
			sale.push_back(t);
			index[t].push_back(n + 1);
			
		}
		saleInCity[i].push_back(sale); 
		
		for(int i = 0;i < n;i++)
			cout << "saleInCity:"<<saleInCity[0][i] << endl;
		if(i > 0)
		{
			for(int k = 0;k < n;k++){
				saleInCity[0][k] += saleInCity[i - 1][k];
			}
		}
	}
	sort(saleInCity[0].begin(),saleInCity[0].end(),cmp);
	for(int i = 0;i < n;i++)
		cout << "saleInCity:"<<saleInCity[0][i] << endl;
	printf("%lld\n",saleInCity[0][0]);
	printf("%d",index[saleInCity[0][0]][0]);
	for(int i = 1;i < index[saleInCity[0][0]].size();i++)
		printf(" %d",index[saleInCity[0][0]][i]);
	return 0;
} 
