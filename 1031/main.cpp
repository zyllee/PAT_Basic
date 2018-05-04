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
			sum = 0;//循环一次要将sum清零 
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
	int sum[MAXSIZE] = {0};//前16位数权重之和 
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
1031. 查验身份证(15)
一个合法的身份证号码由17位地区、日期编号和顺序编号加1位校验码组成。校验码的计算规则如下：

首先对前17位数字加权求和，权重分配为：{7，9，10，5，8，4，2，1，6，3，7，9，10，5，8，4，2}；
然后将计算的和对11取模得到值Z；最后按照以下关系对应Z值与校验码M的值：

Z：0 1 2 3 4 5 6 7 8 9 10
M：1 0 X 9 8 7 6 5 4 3 2

现在给定一些身份证号码，请你验证校验码的有效性，并输出有问题的号码。

输入格式：

输入第一行给出正整数N（<= 100）是输入的身份证号码的个数。随后N行，每行给出1个18位身份证号码。

输出格式：

按照输入的顺序每行输出1个有问题的身份证号码。
这里并不检验前17位是否合理，只检查前17位是否全为数字且最后1位校验码计算准确。如果所有号码都正常，则输出“All passed”。
*/ 
