#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<int> say(N + 1);//每个人说的情况
	for(int i = 1;i <= N;i++){
		cin >> say[i];
	}
	for(int i = 1;i <= N;i++){
		for(int j = i + 1;j <= N;j++){
			vector<int> status(N + 1,1);//初始化状态均为好人，为1
			vector<int> lie;		
			status[i] = status[j] = -1;//依次假设两个人为狼人，从小到大是为了最小序列，狼人为-1
			for(int k = 1;k <= N;k++){
				if(status[abs(say[k])] * say[k] < 0)//如果假设的状态和说的状态不一样，就证明该人说谎
					lie.push_back(k);
			} 
			if(lie.size() == 2 && status[lie[0]] + status[lie[1]] == 0){//如果说谎人数为2，且两人身份为1狼1好，即为所求
				printf("%d %d",i,j);//输出狼人
				return 0;
			}
		}
	}
	printf("No Solution");
	return 0;
} 
