/*
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int is_Empty(vector<double> useage,double e,int D)
{
	int i;
	int cnt_empty = 0;
	for(i = 0;i < useage.size();i++)
    {
    	if(useage[i] < e)
    		cnt_empty++; 
    }
    printf("\nÌìÊý:%d\n",useage.size());
    double p = (double)cnt_empty / useage.size();
//    printf("¸ÅÂÊ:%lf\n",p);
    if(p > 0.5 && useage.size() < D)
    	return -1;
    else if(p > 0.5 && useage.size() > D)
    	return 1;
    else
    	return 0;
}
int main(){
	int n,D;
	double e;
	cin >> n >> e >> D;
	int day;
	int i,j;
	int judge;
	int empty = 0;
	int maybe = 0;
	int full = 0;
	for(i = 0;i < n;i++){
		cin >> day;
		vector<double> useage(day);
		for(j = 0;j < day;j++)
        {
        	cin >> useage[j];
        }
        judge = is_Empty(useage,e,D);
        if(judge == 1)
        	empty++;
        else if(judge == 0)
        	full++;
        else
        	maybe++;
	}
//	cout << empty << maybe << endl;
	double p_maybe,p_empty;
	p_maybe = (double)maybe / n * 100;
	p_empty = (double)empty / n * 100;
//	cout <<	p_maybe << p_empty << endl;
	printf("%.1f%% %.1f%%",p_maybe,p_empty);
	return 0;
}
*/

