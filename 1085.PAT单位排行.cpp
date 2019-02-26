#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std; 
typedef struct{
	float sum;
	int num;
	string name;
}node;
bool cmp(node i,node j){//按要求排序比较 
	if(i.sum != j.sum)
		return (i.sum > j.sum);
	else{
		if(i.num != j.num)
			return (i.num < j.num);
		else
			return (i.name < j.name);
	}
}
int main(){
	string t_id,t_school;
	float t_score;
	map<string,float> sum;
	map<string,int> cnt;
	int N;
	cin >> N;
	//输入数据，并得到学校的人数和总加权分数 
	for(int i = 0;i < N;i++){
		cin >> t_id >> t_score >> t_school;
//		cout << "t_score = " << t_score << endl; 
		for(int i = 0;i < t_school.length();i++){
			t_school[i] = tolower(t_school[i]);
		}
		if(t_id[0] == 'T')
			t_score = t_score * 1.5;
		else if(t_id[0] == 'B')
			t_score = t_score / 1.5; 
		sum[t_school] += t_score;
		cnt[t_school]++; 
	}
	vector<node> ans;
	node tmp; 
	//将得到的学校数据放入到node类中的vector 
	for(map<string,float>::iterator it = sum.begin();it != sum.end();it++){
		tmp.name = it->first;
		tmp.num = cnt[it->first];
//		cout << sum[it->first] << endl;
		tmp.sum = (int)sum[it->first];
		ans.push_back(tmp);
	}
	//对结果进行排序 
	sort(ans.begin(),ans.end(),cmp);
	int rank = 0,pre=-1;
	cout << ans.size()<<endl;
	//输出结果 
	for(int i = 0;i < ans.size();i++){
		if(ans[i].sum != pre) rank = i + 1; 
		pre = ans[i].sum;
		printf("%d ",rank);
		cout << ans[i].name;
		printf(" %.f %d\n",ans[i].sum,ans[i].num);
	}
	return 0;
}
