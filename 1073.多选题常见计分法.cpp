#include<bits/stdc++.h>
using namespace std;
typedef struct{
	int fullMark;
	int optionNum;
	int correctNum;
	string ans;
}node;
typedef struct{
	int answerNum;
	string ans;
}stu;
int main(){
	int n,m;
	cin >> n >> m;
	vector<node> test;
	vector<int> wrongNum(m,0);
	for(int i = 0;i < m;i++){
		node t;
		scanf("%d %d %d",&t.fullMark,&t.optionNum,&t.correctNum);
		for(int j = 0;j < t.correctNum;j++){
			char tmp;
			cin >> tmp;
			t.ans += tmp;
		}
		test.push_back(t);
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			int answerNum;
			stu tmp_stu;
			char tmp;
			getchar();
			scanf("(%d",&answerNum);
			for(int k = 0;k < answerNum;k++){
				scanf(" %c)",&tmp);
				tmp_stu.ans += tmp;
			}
			if(tmp_stu.ans.size() != test[j].ans.size()){
				for(int n = 0;n < tmp_stu.ans.size();n++){
					
				}
			}
		}
	}
	return 0;
}
