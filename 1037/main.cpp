/*������ǹ����������ԣ����֪��ħ�����������Լ��Ļ���ϵͳ ���� ���纣����߹����ģ���ʮ�߸�������(Sickle)��һ����¡(Galleon)����ʮ�Ÿ�����(Knut)��һ�����ɣ������ס������ڣ���������Ӧ���ļ�ǮP����ʵ����ǮA�����������дһ��������������Ӧ�ñ��ҵ���Ǯ��

�����ʽ��

������1���зֱ����P��A����ʽΪ��Galleon.Sickle.Knut���������1���ո�ָ�������Galleon��[0, 107]�����ڵ�������Sickle��[0, 17)�����ڵ�������Knut��[0, 29)�����ڵ�������

�����ʽ��

��һ������������ͬ���ĸ�ʽ�������Ӧ�ñ��ҵ���Ǯ�������û����Ǯ����ô�����Ӧ���Ǹ�����

��������1��
10.16.27 14.1.28
�������1��
3.2.1
��������2��
14.1.28 10.16.27
�������2��
-3.2.1
*/
#include<stdio.h>
#include<iostream>

using namespace std;

long long give_money(long long g,int s,int k){
	long long sum_k = 17*29*g + 29*s + k;
	return sum_k;
}

long long actual_money(long long g,int s,int k){
	long long sum_k = 17*29*g + 29*s + k;
	return sum_k;
}

void back_money(long long sum_give,long long sum_actual,long long *g,int *s,int *k){
	long long reserve = sum_give - sum_actual;
	*g = reserve / (17 * 29);
	if(*g < 0)
		reserve = -(reserve % (17 * 29));
	else
		reserve %= (17 * 29);
	*s = reserve / 29;
	reserve %= 29;
	*k = reserve;
	return ;
}
int main(){
	long long g_give;
	int s_give,k_give;
	long long g_actual;
	int s_actual,k_actual;
	long long sum_give,sum_actual;
	long long g;
	int s;
	int k;
	scanf("%lld%*c%d%*c%d %lld%*c%d%*c%d",&g_actual,&s_actual,&k_actual,&g_give,&s_give,&k_give);
	sum_give = give_money(g_give,s_give,k_give);
//	cout << sum_give << endl;
	sum_actual = actual_money(g_actual,s_actual,k_actual);
//	cout << sum_actual << endl;
	back_money(sum_give,sum_actual,&g,&s,&k);
	cout << g <<"."<< s << "."<< k;
	return 0;
} 
