#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,M,tmp1,tmp2,n;
	map<int,vector<int> > forbid;
	cin >> N >> M;
	//输入禁止的列表
	for(int i = 0;i < N;i++){
		scanf("%d %d",&tmp1,&tmp2);
		forbid[tmp1].push_back(tmp2);
		forbid[tmp2].push_back(tmp1);
	}
	int i,j,k;
	int flag = 1;
	for(i = 0;i < M;i++){
		int is_forbid[100000] = {0};//在判断此种安排是否能相容,这里是用空间换时间 
		scanf("%d",&n);
		vector<int> arrange(n);//最开始写的是二维的数组，看到柳神的解法，意识到没有必要，每一次都是不同的安排，之间并没有联系
		//输入数据
		for(j = 0;j < n;j++){
			scanf("%d",&arrange[j]);
			is_forbid[arrange[j]] = 1;
		}
		//判断是否有不相容的
		for(k = 0;k < arrange.size();k++){
				for(int m = 0;m < forbid[arrange[k]].size();m++){
					if(is_forbid[forbid[arrange[k]][m]] == 1)
						flag = 0;
				}
		}
		printf("%s\n",flag ? "Yes" :"No");
		flag = 1;//重新假设成相容的
	}
	return 0;
}
