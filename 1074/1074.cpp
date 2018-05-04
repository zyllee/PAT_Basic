#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> res;
	string a,b,rule;
	int tmp,addnext;
	cin >> rule >> a >> b;
	int minsize = a.size() < b.size()?a.size():b.size();
	int maxsize = a.size() > b.size()?a.size():b.size();
	if(maxsize <= 20)
	for(int i = 0;i < minsize;i++){
			tmp = (a[a.size() - i - 1] - '0') + (b[b.size() - 1] - '0');
			addnext = tmp % rule[]
	}
	return 0;
} 
