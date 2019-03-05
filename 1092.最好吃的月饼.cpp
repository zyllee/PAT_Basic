//#include<bits/stdc++.h>
//using namespace std;
//
//bool cmp(long long i,long long j){
//	return i > j;
//}
//int main(){
//	int n,m;
//	long long t;
//	cin >> n >> m;
//	vector<vector<long> > saleInCity;
//	map<long,set<int> > index; 
//	for(int i = 0;i < m;i++)
//	{
//		vector<long> sale; 
//		for(int j = 0;j < n;j++)
//		{
//			scanf("%lld",&t);
//			sale.push_back(t);
//		}
//		saleInCity.push_back(sale);
//		if(i > 0)
//		{
//			for(int k = 0;k < n;k++){
////				cout << saleInCity[0][k] << " " << saleInCity[i - 1][k]  << endl;
//				saleInCity[0][k] += saleInCity[i][k];
//				index[saleInCity[0][k]].insert(k + 1);
//			}
//		}
////		for(int k = 0;k < n;k++)
////			cout << "saleInCity" << k + 1 << ":"<<saleInCity[0][k] << endl;
//	}
//	sort(saleInCity[0].begin(),saleInCity[0].end(),cmp);
//	printf("%lld\n",saleInCity[0][0]);
//	set<int>::iterator it = index[saleInCity[0][0]].begin();
//	printf("%d",*it);
//	it++; 
//	for(;it != index[saleInCity[0][0]].end();it++)
//		printf(" %d",*it);
//	return 0;
//} 
#include<bits/stdc++.h>
using namespace std;

bool cmp(int i,int j){
	return i > j;
}
vector<int> sum(1005);
int main(){
	int n,m;
	int t;
	cin >> n >> m;
	map<int,set<int> > index;//用于找最大数的下标
	for(int i = 0;i < m;i++){ 
		for(int j = 0;j < n;j++){
			scanf("%lld",&t);
			sum[j] += t;//将每种商品对应相加
			index[sum[j]].insert(j + 1);
		}
	}
	sort(sum.begin(),sum.end(),cmp);//从大到小排序，找到最大值
	printf("%lld\n",sum[0]);//输出最大值
	set<int>::iterator it = index[sum[0]].begin();
	printf("%d",*it);//输出第一个最大销量的第一个元素
	it++; 
	//输出销量最大的剩余元素
	for(;it != index[sum[0]].end();it++)
		printf(" %d",*it);
	return 0;
} 
