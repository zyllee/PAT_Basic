#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h> 
using namespace std;
/*
int added(vector<int> ID){
	int sum = 0;
	for(vector<int>::iterator it = ID.begin();it != ID.end() - 1;it++){
		if(*it < 0 || *it > 9)
			return 0;
		else
			sum += *it; 
	}
	return sum;
}
*/
int main(){
	int weight[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int Z[] = {0,1,2,3,4,5,6,7,8,9,10};
	char M[] = {'1','0','X','9','8','7','6','5','4','3','2'};
	int n;
	cin >> n;
	getchar();
	vector<string> res;
	string tmp;
	int sum;
	int i,j;
	int index;
	for(i = 0;i < n;i++){
			cin >> tmp;
			sum = 0;//ѭ��һ��Ҫ��sum���� 
			for(j = 0;j < 17;j++){
				sum += ((tmp[j] - '0')*weight[j]);
			}
			index = sum % 11;
//			cout << index << endl;
			if(M[index] != tmp[17])
				res.push_back(tmp);
	}
//	cout<< res.size() << endl;
	if(res.size() == 0)
		printf("All passed");
	else{
		for(i = 0;i < res.size();i++)
			cout << res[i] << endl;
	}
	return 0;
}
/*	int i,j;
	int sum[MAXSIZE] = {0};//ǰ16λ��Ȩ��֮�� 
	int index;
	for(i = 0;i < n;i++){
		for(j = 0;j < 17;j++){
			cin >> num;
			ID[i][j] = num;
		}
		for(k = 0;k < 16;k++)
			sum[i] += (ID[i][j] - '0')*weight[j];
		index = sum[i] % 11;
		if(M[index] != ID[17])
			error_pos[]
		}
}	
*/
/*
1031. �������֤(15)
һ���Ϸ������֤������17λ���������ڱ�ź�˳���ż�1λУ������ɡ�У����ļ���������£�

���ȶ�ǰ17λ���ּ�Ȩ��ͣ�Ȩ�ط���Ϊ��{7��9��10��5��8��4��2��1��6��3��7��9��10��5��8��4��2}��
Ȼ�󽫼���ĺͶ�11ȡģ�õ�ֵZ����������¹�ϵ��ӦZֵ��У����M��ֵ��

Z��0 1 2 3 4 5 6 7 8 9 10
M��1 0 X 9 8 7 6 5 4 3 2

���ڸ���һЩ���֤���룬������֤У�������Ч�ԣ������������ĺ��롣

�����ʽ��

�����һ�и���������N��<= 100������������֤����ĸ��������N�У�ÿ�и���1��18λ���֤���롣

�����ʽ��

���������˳��ÿ�����1������������֤���롣
���ﲢ������ǰ17λ�Ƿ����ֻ���ǰ17λ�Ƿ�ȫΪ���������1λУ�������׼ȷ��������к��붼�������������All passed����
*/ 
