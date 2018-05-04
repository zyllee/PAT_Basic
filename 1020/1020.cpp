#include<bits/stdc++.h>
using namespace std;
struct goods{
	double price;
	double store;
};
int descend(goods i,goods j){return i.price > j.price;}
int main(){
	int n , max;
	cin >> n >> max;
	vector<goods> g(n);
	for(int i = 0;i < n;i++){
		scanf("%lf",&g[i].store);
	}
	vector<double> total_sell(n);
	for(int i = 0;i < n;i++){
		scanf("%lf",&total_sell[i]);
		g[i].price =  total_sell[i] / g[i].store;
	}
	sort(g.begin(),g.end(),descend);
	double get = 0;
	int i = 0;
	while(max != 0){
		if(g[i].store && (max - g[i].store >= 0)){
			get += (double)g[i].store * g[i].price;
			max -= g[i].store;
			
		}	
		else if(g[i].store && (max < g[i].store)){
			get += (double)max * g[i].price;
			max = 0;
		}
		i++;
	}
	printf("%.2f",get);
	return 0;
}
