/*���д�����ҳ�һ�θ��������г�����Ƶ�����Ǹ�Ӣ����ĸ��

�����ʽ��

������һ���и���һ�����Ȳ�����1000���ַ������ַ�����ASCII���������ɼ��ַ����ո���ɣ����ٰ���1��Ӣ����ĸ���Իس��������س��������ڣ���

�����ʽ��

��һ�����������Ƶ����ߵ��Ǹ�Ӣ����ĸ������ִ���������Կո�ָ���
����в��У����������ĸ����С���Ǹ���ĸ��ͳ��ʱ�����ִ�Сд�����Сд��ĸ��

����������
This is a simple TEST.  There ARE numbers and other symbols 1&2&3...........
���������
e 7
*/
#include<stdio.h>
#include<iostream>
#include<string.h>
#define MAXSIZE 1000 
using namespace std;

int main(){
	char str[MAXSIZE];
	gets(str);
	int cnt[26] = {0};
	int i;
	for(i = 0;i < strlen(str);i++){
		switch(str[i]){
			case 'a':cnt[0]++;break;
			case 'A':cnt[0]++;break;
			case 'b':cnt[1]++;break;
			case 'B':cnt[1]++;break;
			case 'c':cnt[2]++;break;
			case 'C':cnt[2]++;break;
			case 'd':cnt[3]++;break;
			case 'D':cnt[3]++;break;
			case 'e':cnt[4]++;break;
			case 'E':cnt[4]++;break;
			case 'f':cnt[5]++;break;
			case 'F':cnt[5]++;break;
			case 'g':cnt[6]++;break;
			case 'G':cnt[6]++;break;
			case 'h':cnt[7]++;break;
			case 'H':cnt[7]++;break;
			case 'i':cnt[8]++;break;
			case 'I':cnt[8]++;break;
			case 'j':cnt[9]++;break;
			case 'J':cnt[9]++;break;
			case 'k':cnt[10]++;break;
			case 'K':cnt[10]++;break;
			case 'l':cnt[11]++;break;
			case 'L':cnt[11]++;break;
			case 'm':cnt[12]++;break;
			case 'M':cnt[12]++;break;
			case 'n':cnt[13]++;break;
			case 'N':cnt[13]++;break;
			case 'o':cnt[14]++;break;
			case 'O':cnt[14]++;break;
			case 'p':cnt[15]++;break;
			case 'P':cnt[15]++;break;
			case 'q':cnt[16]++;break;
			case 'Q':cnt[16]++;break;
			case 'r':cnt[17]++;break;
			case 'R':cnt[17]++;break;
			case 's':cnt[18]++;break;
			case 'S':cnt[18]++;break;
			case 't':cnt[19]++;break;
			case 'T':cnt[19]++;break;
			case 'u':cnt[20]++;break;
			case 'U':cnt[20]++;break;
			case 'v':cnt[21]++;break;
			case 'V':cnt[21]++;break;
			case 'w':cnt[22]++;break;
			case 'W':cnt[22]++;break;
			case 'x':cnt[23]++;break;
			case 'X':cnt[23]++;break;
			case 'y':cnt[24]++;break;
			case 'Y':cnt[24]++;break;
			case 'z':cnt[25]++;break;
			case 'Z':cnt[25]++;break;
			default:break;
		} 
	}
		int max = 0;
		int pos;
		for(int i = 0;i < 26;i++){
			if(cnt[i] > max){
				max = cnt[i];
				pos = i;
			} 
		}
	cout << (char)('a' + pos) <<  " " << max;
	return 0;	
} 
