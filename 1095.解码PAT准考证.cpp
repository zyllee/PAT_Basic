#include<bits/stdc++.h>
using namespace std;
typedef struct{
	string pat_id;
	int score;
}node;
bool cmp(const node &i,const node &j){
	return i.score != j.score ? i.score > j.score : i.pat_id < j.pat_id; 
}
int main(){
	int n,m,type,s;
	string pat_id;
	string parameter;
	cin >> n >> m; 
	vector<node> info(n);
	node t;
	//输入信息
	for(int i = 0;i < n;i++){
		cin >> info[i].pat_id >> info[i].score;
	}
	sort(info.begin(),info.end(),cmp);
	int flag = 0;
	for(int i = 1;i <= m;i++){
		cin >> type >> parameter;
		string tmp;
		printf("Case %d:",i);
		printf(" %d %s\n",type,parameter.c_str());
		//分情况输出
		if(type == 1){
			for(int i =0;i < info.size();i++){
				if(info[i].pat_id[0] == parameter[0]){
					printf("%s %d\n",info[i].pat_id.c_str(),info[i].score);
					flag = 1;
				}
			}
			if(!flag)
				printf("NA\n");
		}
		else if(type == 2){
			int sumScore = 0;
			int cnt = 0;
			for(int i =0;i < info.size();i++){
				string sub =  info[i].pat_id.substr(1,3);
				if(sub == parameter){
					flag = 1;
					sumScore += info[i].score;
					cnt++;
				} 
			}
			if(flag)
				printf("%d %d\n",cnt,sumScore);
			else
				printf("NA\n");
		}
		else{
			unordered_map<string,int> numAboutSite;//这里必须使用unordered_map，否则要超时
			for(int i = 0;i < info.size();i++){
				string time = info[i].pat_id.substr(4,6);
				if(time == parameter){
					string site = info[i].pat_id.substr(1,3);
					numAboutSite[site]++;
					flag = 1;
				}
			}
			vector<node> ans;
			for(unordered_map<string,int>::iterator it = numAboutSite.begin();it != numAboutSite.end();it++){
				t.pat_id = it->first;//这个地方其实是房间号
				t.score = it->second;//这个是人数
				ans.push_back(t);
			}
			sort(ans.begin(),ans.end(),cmp);
			if(flag){
				for(int i = 0;i < ans.size();i++)
					printf("%s %d\n",ans[i].pat_id.c_str(),ans[i].score);
			}
			else{
				printf("NA\n");
			}		
		}
		flag = 0;
	}
	return 0;
}
