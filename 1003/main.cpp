#include <iostream>
#include <string.h>
#define MAXSIZE 1000
using namespace std;
/*
“答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于PAT的“答案正确”大派送 —— 只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。

得到“答案正确”的条件是：

1. 字符串中必须仅有P, A, T这三种字符，不可以包含其它字符；
2. 任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
3. 如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a, b, c 均或者是空字符串，或者是仅由字母 A 组成的字符串。

现在就请你为PAT写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。
输入格式： 每个测试输入包含1个测试用例。第1行给出一个自然数n (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过100，且不包含空格。

输出格式：每个字符串的检测结果占一行，如果该字符串可以获得“答案正确”，则输出YES，否则输出NO。
*/
bool judge(char str[]){
    char front[MAXSIZE] = {0};
    char after[MAXSIZE] = {0};
    char mid[MAXSIZE] = {0};
    int cnt = 0;
    int m = 0;
    int n;
    while(str[cnt] != 'P' && cnt < strlen(str)){
        front[m] = str[cnt];
        cnt++;
        m++;
    }
    int j = 0;
    while(str[cnt] != 'T' && cnt < strlen(str)){
        mid[j] = str[cnt];
        cnt++;
        j++;
    }
    int k = 0;
    while(cnt < strlen(str)){
        after[k] = str[cnt];
        cnt++;
        k++;
    }
    int i = 0;
    while(i < strlen(front)){
    	if(front[i] != 'A' && front[i] != ' ')
            return false;
        i++;
    }
    i = 0;
    int cnt_A = 0;
    while(i < strlen(mid)){
        if(mid[i] == 'A')
           cnt_A++;
    	if(mid[i] != 'P' && mid[i] != 'A' && mid[i] != ' ')
            return false;
        i++;
    }
    if(cnt_A > 2)
            return false;
    if(cnt_A == 2){
        j = 0;
        i = 0;
        char new_after[MAXSIZE];
        while(j < strlen(after)){
              if(after[i] == 'T')
                i++;
              new_after[j] = after[i + j];
              j++;
        }
        i = 0;
        while(i < strlen(after)){
                if(strlen(new_after) == 0 && strlen(front) == 0)
                   return true;
                if(strcmp(new_after,front) == 0)
                   return false;
                else if(after[i] != 'T' && after[i] != ' ')
                   return false;
                else
                   return true;
                i++;
        }
    }
    if(cnt_A == 1){
        i = 0;
        while(i < strlen(front)){
            if(after[i + 1] != front[i])
                return false;
            i++;
        }
        return true;
    }
    if(cnt_A == 0)
            return false;
    i = 0;
    while(i < strlen(after)){
    	if(after[i] != 'T' && after[i] != ' ')
            return false;
        i++;
    }
        return true;
}
int main()
{
    char str[MAXSIZE];
/*    cin >> str;
    if(judge(str))
        cout << "YES";
    else
        cout << "NO";
*/
    int n;
    cin >> n;
    int result[MAXSIZE];
    for(int i = 0;i < n;i++){
    cin >> str;
    if(judge(str))
        result[i] = 1;
    else
        result[i] = 0;
    }
    for(int i = 0;i < n -1;i++){
    if(result[i])
        cout<< "YES" <<endl;
    else
        cout << "NO" <<endl;
    }
    if(result[n - 1])
        cout<< "YES";
    else
        cout << "NO";
    return 0;
}
