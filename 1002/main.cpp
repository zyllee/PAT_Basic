#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char n[100];
    cin >> n;
    int arr[100];
    int i = 0;
    int sum = 0;
    for(int i = 0;i < strlen(n);i++){
        arr[i] = n[i] - '0';
        sum += arr[i];
    }
/*    while(n != 0){
        arr[i] = n % 10;
        sum += arr[i];
        n /= 10;
        i++;
    }
    cout << sum  << endl;
*/
    int j = 0;
    int arr_2[100];
    while(sum != 0){
        arr_2[j] = sum % 10;
        sum /= 10;
        j++;
    }
    while(j  > 1){//��ȥ���һ���������
        switch(arr_2[j -1]){ //��������ѭ�������һ��ѭ������һ�Σ�����Ӧ�ü�ȥ���һ��
            case 0:cout << "ling ";break;
            case 1:cout << "yi ";break;
            case 2:cout << "er ";break;
            case 3:cout << "san ";break;
            case 4:cout << "si ";break;
            case 5:cout << "wu ";break;
            case 6:cout << "liu ";break;
            case 7:cout << "qi ";break;
            case 8:cout << "ba ";break;
            case 9:cout << "jiu ";break;
        }
        j--;
    }
    switch(arr_2[0]){
            case 0:cout << "ling";break;
            case 1:cout << "yi";break;
            case 2:cout << "er";break;
            case 3:cout << "san";break;
            case 4:cout << "si";break;
            case 5:cout << "wu";break;
            case 6:cout << "liu";break;
            case 7:cout << "qi";break;
            case 8:cout << "ba";break;
            case 9:cout << "jiu";break;
    }
    return 0;
}
