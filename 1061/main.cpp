/* 判断题的评判很简单，本题就要求你写个简单的程序帮助老师判题并统计学生们判断题的得分。

输入格式：

输入在第一行给出两个不超过100的正整数N和M，分别是学生人数和判断题数量。第二行给出M个不超过5的正整数，
是每道题的满分值。第三行给出每道题对应的正确答案，0代表“非”，1代表“是”。随后N行，每行给出一个学生的解答。数字间均以空格分隔。

输出格式：

按照输入的顺序输出每个学生的得分，每个分数占一行。

输入样例：
3 6
2 1 3 3 4 5
0 0 1 0 1 1
0 1 1 0 0 1
1 0 1 0 1 0
1 1 0 0 1 1
输出样例：
13
11
12
*/
#include<stdio.h>
#include<iostream>
#define MAXSIZE 100
using namespace std;
void judge_test(int (*ans)[MAXSIZE],int standard[],int score[],int per_test_score[],int stu_amount,int test_amount){
	for(int i = 0;i < stu_amount;i++)
		for(int j = 0;j < test_amount;j++){
			if(ans[i][j] == standard[j])
				score[i] += per_test_score[j];
		}
	return ;
}
int main(){
	int stu_amount;
	int test_amount;
	cin >> stu_amount >> test_amount;
	int per_test_score[MAXSIZE];
	int ans[MAXSIZE][MAXSIZE];
	int standard[MAXSIZE];
	int score[MAXSIZE];
	for(int i = 0;i < test_amount;i++)
		cin >> per_test_score[i];
	for(int i = 0;i < test_amount;i++)
		cin >> standard[i];	
	for(int i = 0;i < stu_amount;i++)
		for(int j = 0;j < test_amount;j++){
			cin >> ans[i][j];
		}
	judge_test(ans,standard,score,per_test_score,stu_amount,test_amount);
	for(int i = 0;i < stu_amount;i++){
		cout << score[i] << endl;
	}
	return 0;
}
