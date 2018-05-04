/*给定一段一段的绳子，你需要把它们串成一条绳。
每次串连的时候，是把两段绳子对折，再如下图所示套接在一起。
这样得到的绳子又被当成是另一段绳子，可以再次对折去跟另一段绳子串连。
每次串连后，原来两段绳子的长度就会减半。


给定N段绳子的长度，你需要找出它们能串成的绳子的最大长度。

输入格式：

每个输入包含1个测试用例。
每个测试用例第1行给出正整数N (2 <= N <= 104)；
第2行给出N个正整数，即原始绳段的长度，数字间以空格分隔。所有整数都不超过104。

输出格式：

在一行中输出能够串成的绳子的最大长度。结果向下取整，即取为不超过最大长度的最近整数。

输入样例：
8
10 15 12 3 4 13 1 15
输出样例：
14
*/ 
#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
	vector<double> arr;
	double data;
	int n;
	cin >> n;
	int i;
	for(i = 0;i < n;i++){
		cin >> data;
		arr.push_back(data);
	}
	sort(arr.begin(),arr.end());
//	for(vector<double>::iterator it = arr.begin();it != arr.end();it++)
//		cout << *it << " ";
	double len = arr[0];
	if(arr.size() == 1)
		cout << floor(len);
	else{
		for(i = 1;i < arr.size();i++){
			len = 0.5 * len + 0.5 *arr[i];
		}
		cout << floor(len);
	} 
/*	double tmp = 0;
	while((int)arr.size() != 1){
		vector<double>::iterator it = arr.begin();
		tmp += (*it / 2) + (*(it + 1) / 2);
		arr.erase(arr.begin(),arr.begin() + 1);
		arr.push_back(tmp);
		sort(arr.begin(),arr.end());
		tmp = 0;
		for(vector<double>::iterator j = arr.begin();j != arr.end();j++)
			cout << *j << " ";
		cout << endl;
	} 
*/
	return 0;
} 

