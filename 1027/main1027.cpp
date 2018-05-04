#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	char ch;
	cin >> num >> ch;
	int i = 1;
	int row = 0;//行数 
	vector<int>	per_row;//每行的字符个数	
	vector<int> row_space;//每行的空格个数 
	int sum = 0;//折半总和 
	while((2*sum - 1) < num){
		sum += i;
		if((2*sum -1) > num){//如果下次2*sum - 1 > num 表示这个条件下行数已到达超越最大行数 
			sum -= i;
			break;
		}
		per_row.push_back(i);
		row_space.push_back(row);
		i = i + 2;
		row++;
	}
	
/*	while(tmp <= num + 1 ||(tmp >= num + 1 && tmp <= )){
		tmp += 2*i;
		i = i + 2;
		row ++;	
	}
*/
	int tmp = row;//tmp保存row使得迭代能够顺利进行而不是死循环，row不能减，否则循环判断条件将会出问题 
	int tmp_space;//用一个暂时的变量保存空格个数，以便后半部分能够使用 row_space
	int j;
	for(i = 0;i < row;i++){
		tmp_space = row_space[i];
		while(tmp_space != 0){
			cout << " ";
			tmp_space--;
		}
		for(j = 0;j < per_row[tmp - 1];j++){
			cout << ch;
		}
		tmp--;
		cout << endl;
	}
	tmp = row;
	for(i = 1;i < row;i++){//后半部分会少第一行，直接从第二行开始 
		while(row_space[tmp - 1] != 1){
			cout << " ";
			row_space[tmp - 1]--;
		}
		for(j = 0;j < per_row[i];j++){
			cout << ch;
		}
		tmp--;
		cout << endl;
	}
//	cout << num << endl;
//	cout << sum * 2 - 1 << endl; 
	cout << num - (sum * 2 - 1); 
	return 0;
} 
