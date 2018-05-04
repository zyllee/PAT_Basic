#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,M;
	cin >> N >> M;
	vector<int> search_item_ID(M); 
	for(int i = 0;i < M;i++){
		cin >> search_item_ID[i];
	}
	vector<string> name(N);
	int n;
	bool print_name = false; 
	int cnt_item = 0;
	int cnt_stu = 0;
	for(int i = 0;i < N;i++){
		cin >> name[i] >> n;
		vector<int> item_ID(n);
		print_name = false;
		for(int j = 0;j < n;j++){
			cin >> item_ID[j];
			for(int k = 0;k < search_item_ID.size();k++){
				if(search_item_ID[k] == item_ID[j]){
					if(!print_name){
						cout << name[i] << ":";
						cnt_stu++; 
					}
					printf(" %04d",item_ID[j]);//注意这里%04d 测试点3
					cnt_item++;
					print_name = true;
				} 
			}
			if(j == n - 1 && print_name)
				cout << endl;
		}
	}
	cout << cnt_stu << " " << cnt_item;  
	return 0; 
} 
