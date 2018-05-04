/*给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。

输入格式：测试输入包含一个测试用例，在一行内给出总长度不超过80的字符串。字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，单词之间用1个空格分开，输入保证句子末尾没有多余的空格。

输出格式：每个测试用例的输出占一行，输出倒序后的句子。

输入样例：
Hello World Here I Come
输出样例：
Come I Here World Hello
*/
#include<stdio.h>
#include<iostream>
#include<string.h>
#define MAXSIZE 100
using namespace std;
void reverse(char str[]){
	int i = 0;
	int j;
	int words[MAXSIZE] = {0};
	char result[MAXSIZE];
	int cnt = 0;//记录单词数目 
	while(i < strlen(str)){
		/*while(str[i] != ' '){
			result[i] = str[i];
			cout << result[i];
			i++;
			pos[cnt]++;
		}*/
		if(str[i] != ' '){
			result[i-cnt] = str[i];
//			cout << result[i-cnt];
			i++;
			words[cnt]++;
//			cout << words[cnt] << " ";
			continue;
		}
		cnt++;
//		cout << cnt << " "<<endl;
		i++;
	}
/*	for(int i =0;i < strlen(result) - 1;i++){
		cout << result[i];
	}
*/	
	int sum = 0;
	for(i = cnt;i >= 0;i--){
		sum += words[i];
		cout << sum << endl;
		for(j = strlen(result) - 1 - sum;j < strlen(result) - 1 - sum + words[i];j++){ 
			cout << result[j];
		}
		cout << " "; 
	}
	
}

int main(){
	char str[MAXSIZE];
	gets(str);
	reverse(str);
	return 0;
} 
