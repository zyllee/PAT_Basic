/*如果你是哈利·波特迷，你会知道魔法世界有它自己的货币系统 —— 就如海格告诉哈利的：“十七个银西可(Sickle)兑一个加隆(Galleon)，二十九个纳特(Knut)兑一个西可，很容易。”现在，给定哈利应付的价钱P和他实付的钱A，你的任务是写一个程序来计算他应该被找的零钱。

输入格式：

输入在1行中分别给出P和A，格式为“Galleon.Sickle.Knut”，其间用1个空格分隔。这里Galleon是[0, 107]区间内的整数，Sickle是[0, 17)区间内的整数，Knut是[0, 29)区间内的整数。

输出格式：

在一行中用与输入同样的格式输出哈利应该被找的零钱。如果他没带够钱，那么输出的应该是负数。

输入样例1：
10.16.27 14.1.28
输出样例1：
3.2.1
输入样例2：
14.1.28 10.16.27
输出样例2：
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
