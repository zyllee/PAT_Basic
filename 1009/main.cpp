/*����һ��Ӣ�Ҫ�����д���򣬽��������е��ʵ�˳��ߵ������

�����ʽ�������������һ��������������һ���ڸ����ܳ��Ȳ�����80���ַ������ַ��������ɵ��ʺ����ɿո���ɣ����е�������Ӣ����ĸ����Сд�����֣���ɵ��ַ���������֮����1���ո�ֿ������뱣֤����ĩβû�ж���Ŀո�

�����ʽ��ÿ���������������ռһ�У���������ľ��ӡ�

����������
Hello World Here I Come
���������
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
	int cnt = 0;//��¼������Ŀ 
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
