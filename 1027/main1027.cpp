#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	char ch;
	cin >> num >> ch;
	int i = 1;
	int row = 0;//���� 
	vector<int>	per_row;//ÿ�е��ַ�����	
	vector<int> row_space;//ÿ�еĿո���� 
	int sum = 0;//�۰��ܺ� 
	while((2*sum - 1) < num){
		sum += i;
		if((2*sum -1) > num){//����´�2*sum - 1 > num ��ʾ��������������ѵ��ﳬԽ������� 
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
	int tmp = row;//tmp����rowʹ�õ����ܹ�˳�����ж�������ѭ����row���ܼ�������ѭ���ж�������������� 
	int tmp_space;//��һ����ʱ�ı�������ո�������Ա��벿���ܹ�ʹ�� row_space
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
	for(i = 1;i < row;i++){//��벿�ֻ��ٵ�һ�У�ֱ�Ӵӵڶ��п�ʼ 
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
