#include<bits/stdc++.h>
using namespace std;
typedef struct{
	string nm;
	int y,m,d;
}info;
int main(){
	int n;
	info t; 
	cin >> n;
	int cnt = 0;
	int minyear = 0,minmonth = 0,minday = 06;
	int maxyear = 9999,maxmonth = 9999,maxday = 9999;
	string minname,maxname;
	for(int i = 0;i < n;i++){
		cin >> t.nm;
		scanf("%d%*c%d%*c%d",&t.y,&t.m,&t.d);
		if((t.y < 1814) || 
		   (t.y == 1814 && t.m < 9 && t.d < 6)||
		   (t.y == 1814 && t.m == 9 && t.d < 6)||
		   (t.y > 2014) || 
		   (t.y == 2014 && t.m > 9 && t.d > 6)||
		   (t.y == 2014 && t.m == 9 && t.d > 6))
		   continue;
		else{
			cnt++;
			if(t.y > minyear ||
			   (t.y == minyear && t.m > minmonth)||
			   (t.y == minyear && t.m == minmonth && t.d > minday)){
			   	minname = t.nm;
			   	minyear = t.y;
			   	minmonth = t.m;
			   	minday = t.d;
			   }
			if(t.y < maxyear ||
			   (t.y == maxyear && t.m < maxmonth)||
			   (t.y == maxyear && t.m == maxmonth && t.d < maxday)){
			   	maxname = t.nm;
			   	maxyear = t.y;
			   	maxmonth = t.m;
			   	maxday = t.d;
			   }
		}
	}
	if(cnt) 
		cout << cnt << " " << maxname << " " << minname;
	else
		cout << cnt;
	return 0;
}
