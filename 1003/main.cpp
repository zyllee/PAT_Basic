#include <iostream>
#include <string.h>
#define MAXSIZE 1000
using namespace std;
/*
������ȷ�����Զ�����ϵͳ�����������˻�ϲ�Ļظ�����������PAT�ġ�����ȷ�������� ���� ֻҪ������ַ�����������������ϵͳ�����������ȷ��������������𰸴��󡱡�

�õ�������ȷ���������ǣ�

1. �ַ����б������P, A, T�������ַ��������԰��������ַ���
2. �������� xPATx ���ַ��������Ի�á�����ȷ�������� x �����ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
3. ��� aPbTc ����ȷ�ģ���ô aPbATca Ҳ����ȷ�ģ����� a, b, c �������ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����

���ھ�����ΪPATдһ���Զ����г����ж���Щ�ַ����ǿ��Ի�á�����ȷ���ġ�
�����ʽ�� ÿ�������������1��������������1�и���һ����Ȼ��n (<10)������Ҫ�����ַ���������������ÿ���ַ���ռһ�У��ַ������Ȳ�����100���Ҳ������ո�

�����ʽ��ÿ���ַ����ļ����ռһ�У�������ַ������Ի�á�����ȷ���������YES���������NO��
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
