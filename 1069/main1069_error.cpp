#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> pos;
	vector<string> name;
	int M,N,S;
	cin >> M >> N >> S;
	string tmp;
	vector<int> repeat;
	for(int i = 0;i <= M;i++){
		getline(cin,tmp);
		name.push_back(tmp);
		if(i >= 1){
			for(vector<string>::iterator it = name.begin();it != name.end() - 1;it++){
				if(name[i].compare(*it) == 0){
					it = name.erase(it);
					it--;
				}
			}
		}
	}
	for(int i = 0;i < name.size();i++)
		cout << name[i] << endl; 

	bool win = false;
	for(int i = S;i < name.size();i += N){
			cout << name[i] << endl;
			win = true;
	}
	if(!win)
		printf("Keep going...");
	return 0;
}
