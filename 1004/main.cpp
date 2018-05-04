/*读入n名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。

输入格式：每个测试输入包含1个测试用例，格式为

  第1行：正整数n
  第2行：第1个学生的姓名 学号 成绩
  第3行：第2个学生的姓名 学号 成绩
  ... ... ...
  第n+1行：第n个学生的姓名 学号 成绩
其中姓名和学号均为不超过10个字符的字符串，成绩为0到100之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。
输出格式：对每个测试用例输出2行，第1行是成绩最高学生的姓名和学号，第2行是成绩最低学生的姓名和学号，字符串间有1空格。
*/
#include<stdio.h>
#include<iostream>
#include<string.h>
#define MAXSIZE 100
using namespace std;
typedef struct{
	char name[MAXSIZE];
	char num[MAXSIZE];
	int score; 
}STUDENT,*PSTUDENT;

int main(){
	STUDENT s[MAXSIZE],lowest,highest;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> s[i].name >> s[i].num >> s[i].score;
	}
	highest = lowest = s[0];
	for(int i = 0;i < n;i++){
		if(s[i].score > highest.score){
			highest.score = s[i].score;
			strcpy(highest.name,s[i].name);
			strcpy(highest.num,s[i].num);
		}
		if(s[i].score < lowest.score){
			lowest.score = s[i].score;
			strcpy(lowest.name,s[i].name);
			strcpy(lowest.num,s[i].num);
		}
	}
	cout << highest.name << " " << highest.num <<endl;
	cout << lowest.name  << " " << lowest.num;
	return 0;
} 
