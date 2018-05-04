#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr;
	int n,m;
	cin >> n >> m;
	if(m > n)
		m = m % n;
	int tmp;
	int i;
	for(i = 0;i < n;i++){
		cin >> tmp;
		arr.push_back(tmp);
	}
	reverse(arr.begin(),arr.end());
	reverse(arr.begin(),arr.begin() + m);
	reverse(arr.begin() + m,arr.end());
	for(i = 0;i < n - 1;i++)
		cout << arr[i] <<  " ";
	cout << arr[n - 1];
	return 0;
} 
