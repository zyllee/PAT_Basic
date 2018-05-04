#include<bits/stdc++.h>
using namespace std;
struct p{
	int h;
	string name;
};
bool descend(p i,p j){ return (i.h != j.h ? i.h > j.h:i.name < j.name);}
int main(){
	int N,K,m;
	cin >> N >> K;
	m = floor(N / K);
	string namet;
	int ht;
	vector<p> persons(N);
	for(int i = 0;i < N;i++){
		cin >> persons[i].name >> persons[i].h;
	}
	sort(persons.begin(),persons.end(),descend);
	int cnt = 0;
	int t = 0;
	while(cnt < K){
		if(cnt == 0)
			m = m + N % K;
		else
			m = floor(N / K);
		vector<string> tmp(m);
		tmp[m / 2] = persons[t].name;
		//×ó²à 
		int j = m / 2 - 1;
		for(int i = t + 1;i < t + m;i += 2)
			tmp[j--] = persons[i].name;
		//ÓÒ²à 
		j = m / 2 + 1;
		for(int i = t + 2;i < t + m;i += 2)
			tmp[j++] = persons[i].name;
		cout << tmp[0];
		for(int i = 1;i < m;i++)
			cout << " " << tmp[i];
		cout << endl;
		t += m;
		cnt++;
	}
/*	for(int i = 0;i < N;i++){
		cout << persons[i].h <<  " ";
	}
*/
	return 0;
}
