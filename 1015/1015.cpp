#include<bits/stdc++.h>
using namespace std;
struct s{
	int num,d,c;
};
bool cmp(s i,s j){
	if((i.c + i.d) != (j.c + j.d))
		return (i.c + i.d) > (j.c +j.d);
	else if(i.d != j.d)
		return i.d > j.d;
	else 
		return i.num < j.num;
}
int main(){
	int n,l,h;
	cin >> n >> l >> h;
	vector<s> v[4]; 
	s tmp;
	int total = n;
	for(int i = 0;i < n;i++){
		scanf("%d %d %d",&tmp.num,&tmp.d,&tmp.c);
		if(tmp.d < l || tmp.c < l)
			total--;
		else if(tmp.c >= h && tmp.d >= h)
			v[0].push_back(tmp);
		else if(tmp.c < h  && tmp.d >= h)
			v[1].push_back(tmp);
		else if(tmp.c < h  && tmp.d < h  && tmp.d > tmp.c)
			v[2].push_back(tmp);
		else
			v[3].push_back(tmp);
	}
	cout << total << endl; 
	for(int i = 0;i < 4;i++){
		sort(v[i].begin(),v[i].end(),cmp);
		for(int j = 0;j < v[i].size();j++)
			printf("%d %d %d\n",v[i][j].num,v[i][j].d,v[i][j].c);
	}
	/*	sort(second.begin(),second.end(),cmp);
	for(int i = 0;i < second.size();i++)
		printf("%d %d %d\n",second[i].num,second[i].d,second[i].c);
	sort(third.begin(),third.end(),cmp);
	for(int i = 0;i < third.size();i++)
		printf("%d %d %d\n",third[i].num,third[i].d,third[i].c);
	sort(others.begin(),others.end(),cmp);
	for(int i = 0;i < others.size();i++)
		printf("%d %d %d\n",others[i].num,others[i].d,others[i].c);
	*/
	return 0;
}

