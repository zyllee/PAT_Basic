/*����һ��һ�ε����ӣ�����Ҫ�����Ǵ���һ������
ÿ�δ�����ʱ���ǰ��������Ӷ��ۣ�������ͼ��ʾ�׽���һ��
�����õ��������ֱ���������һ�����ӣ������ٴζ���ȥ����һ�����Ӵ�����
ÿ�δ�����ԭ���������ӵĳ��Ⱦͻ���롣


����N�����ӵĳ��ȣ�����Ҫ�ҳ������ܴ��ɵ����ӵ���󳤶ȡ�

�����ʽ��

ÿ���������1������������
ÿ������������1�и���������N (2 <= N <= 104)��
��2�и���N������������ԭʼ���εĳ��ȣ����ּ��Կո�ָ�������������������104��

�����ʽ��

��һ��������ܹ����ɵ����ӵ���󳤶ȡ��������ȡ������ȡΪ��������󳤶ȵ����������

����������
8
10 15 12 3 4 13 1 15
���������
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

