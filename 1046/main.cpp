/* 划拳是古老中国酒文化的一个有趣的组成部分。酒桌上两人划拳的方法为：每人口中喊出一个数字，同时用手比划出一个数字。
如果谁比划出的数字正好等于两人喊出的数字之和，谁就赢了，输家罚一杯酒。两人同赢或两人同输则继续下一轮，直到唯一的赢家出现。

下面给出甲、乙两人的划拳记录，请你统计他们最后分别喝了多少杯酒。

输入格式：

输入第一行先给出一个正整数N（<=100），随后N行，每行给出一轮划拳的记录，格式为：

甲喊 甲划 乙喊 乙划

其中“喊”是喊出的数字，“划”是划出的数字，均为不超过100的正整数（两只手一起划）。

输出格式：

在一行中先后输出甲、乙两人喝酒的杯数，其间以一个空格分隔。
*/
 #include<stdio.h>
 #include<iostream>
 #define MAXSIZE 100
 using namespace std;
 int main(){
 	int drink_A = 0;
 	int drink_B = 0;
 	int done_A[MAXSIZE];
 	int say_A[MAXSIZE];
 	int done_B[MAXSIZE];
 	int say_B[MAXSIZE];
 	int times;
 	cin >> times;
 	for(int i = 0;i < times;i++){
 		cin >> say_A[i] >> done_A[i] >> say_B[i] >> done_B[i];
	}
	for(int i = 0;i < times;i++){
		if(done_A[i] == say_A[i] + say_B[i] && done_B[i] != say_A[i] + say_B[i]){
			drink_B++;
		}
		else if(done_A[i] != say_A[i] + say_B[i] && done_B[i] == say_A[i] + say_B[i]){
			drink_A++;
		}
	}
	cout << drink_A << " " << drink_B;
 	return 0;
 }
