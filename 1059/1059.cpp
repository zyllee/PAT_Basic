#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n){
	if(n == 0 || n == 1)
		return false;
	if(n == 2)
		return true;
	for(int i = 2;i < n;i++){
		if(n % i == 0){ 
			return false; 
		} 
	}
	return true;
}
int main(){
	int n;
	cin >> n;
	int tmp;
	map<int,bool> is_check;
	map<int,string> reward; 
	for(int i = 0;i < n;i++){
		cin >> tmp;
		if(i == 0){
			reward[tmp] = "Mystery Award";
		}
		else if(is_prime(i + 1)){
			reward[tmp] = "Minion";
		}
		else{
			reward[tmp] = "Chocolate";
		}
	}
	int search;
	cin >> search;
	for(int i = 0;i < search;i++){
		cin >> tmp;
		if(is_check[tmp])
			printf("%04d: Checked\n",tmp);
		else{
			
			if(reward[tmp] != "Mystery Award" && reward[tmp] != "Minion" 
				&& reward[tmp] != "Chocolate")
				printf("%04d: Are you kidding?\n",tmp);
			else{
				printf("%04d: ",tmp);
				cout << reward[tmp] << endl;
				is_check[tmp] = true;
			}
		}
	} 
	return 0;
} 
