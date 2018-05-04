#include <iostream>

using namespace std;

int main()
{
    int n;
    int cnt = 0;
    cin >> n;
    while(n != 1){
        if(n % 2  == 0){
            n /= 2;
        }
        else{
            n = 3*n + 1;
            n /= 2;
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}
