#include<bits/stdc++.h>
using namespace std;
bool compare(int i,int j){return (i > j);}
int main(){
	int n;
	cin >> n;
	vector<int> res(100000);
	vector<int> arr(n);
	int tmp;
	int pos = 0;
	map<int,bool> is_key;
	map<int,int> p;
	for(int i = 0;i < n;i++){
		cin >> tmp;
		arr[i] = tmp;
		cout << tmp << endl;
		while(tmp != 1){
			if(tmp % 2 == 0){
				res[pos] = tmp / 2;
				cout << res[pos] << endl;
				if(is_key[res[pos]] == true){
					is_key[res[pos]] = false;
				}
				else if(is_key[res[pos]] == false){
					p[res[pos]] = arr[i];
					tmp = res[pos];
					pos++;
					continue;
				}
				else{
					is_key[res[pos]] = true;
				}	
			}
			else{
				res[pos] = (3 * tmp + 1) / 2;
				cout << res[pos] << endl;
				if(is_key[res[pos]] == true){
					is_key[res[pos]] = false;					
					tmp = res[pos];
				}
				else if(is_key[res[pos]] == false){
					p[res[pos]] = arr[i];
					tmp = res[pos];
					pos++;
					continue;
				}
				else{
					is_key[res[pos]] = true;
				} 
			}
			p[res[pos]] = arr[i];
			tmp = res[pos];
			pos++;
		}
	}
//	if(is_key[3]) cout << "ÕÒµ½£¡"; 
	vector<int> final_res;
	for(int i = 0;i <= pos;i++){
		if(is_key[res[i]]){
			cout << p[res[i]] << " ";
			final_res.push_back(p[res[i]]);
		}
	}	
/*	sort(final_res.begin(),final_res.end(),compare);
	int i = 0;
	for(vector<int>::iterator it = final_res.begin();it != final_res.end()- 1;it++){
		i++;
		cout << *it << " ";
	}
	cout << final_res[i + 1];
*/
	return 0;
} 
