#include<bits/stdc++.h>
using namespace std;
typedef struct{
	string name;
	int gp;
	int gm;
	int gf;
	float g;
}node;
bool cmp(node a,node b){
	return a.g != b.g ? a.g > b.g : a.name < b.name;
}
int main(){
	int p,m,n;
	vector<node> stu,ans;
	string t_name;
	int t_score;
	map<string,int> idx;
	scanf("%d %d %d",&p,&m,&n);
	int cnt = 0;
	for(int i = 0;i < p;i++){
		cin >> t_name >> t_score;
		if(t_score >= 200){
			stu.push_back(node{t_name,t_score,-1,-1,0});
			idx[t_name] = cnt++;
		}
	}
	for(int i = 0;i < m;i++){
		cin >> t_name >> t_score;
		if(idx[t_name] != 0) stu[idx[t_name]].gm = t_score; 
	}
	for(int i = 0;i < n;i++){
		cin >> t_name >> t_score;
		if(idx[t_name] != 0){
			//cout << stu[idx["wehu8"]].gm << " " << stu[idx["wehu8"]].gf << endl;
			stu[idx[t_name]].gf = t_score;
			if(stu[idx[t_name]].gm > stu[idx[t_name]].gf){
				stu[idx[t_name]].g = (int)(0.4 * stu[idx[t_name]].gm + 0.6 * stu[idx[t_name]].gf + 0.5);
			}
			else{
				stu[idx[t_name]].g = t_score;
			}
		}
	}
	for(int i = 0;i < stu.size();i++)
		if(stu[i].g >= 60) ans.push_back(stu[i]);
	sort(ans.begin(),ans.end(),cmp);
	for(int i = 0;i < ans.size();i++){
		cout << ans[i].name << " " << ans[i].gp << " " << ans[i].gm << " " << ans[i].gf <<  " "<<ans[i].g << endl;
	}
	return 0;
} 
