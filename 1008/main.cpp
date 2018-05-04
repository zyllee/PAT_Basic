#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr;
	int n,m;
	cin >> n >> m;
	if(m > n)
		m = m % n;
	int i;
	int tmp;
	for(i = 0;i < n;i++){
		cin >> tmp;
		arr.push_back(tmp);
	}
/*	for(i = n - m ;i < n;i++)
		cout << arr[i] << " ";
	for(i = 0;i < n - m - 1;i++)
		cout << arr[i] << " ";
*/ 
	for(vector<int>::iterator it = arr.begin() +(n - m) ;it != arr.end();it++){
		cout << *it << " ";
	}
	for(vector<int>::iterator it = arr.begin();it != arr.end() - m - 1;it++){
		cout << *it << " ";
	} 
	cout << arr[n - m - 1];
	return 0;
}
