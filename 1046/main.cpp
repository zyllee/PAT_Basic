/* ��ȭ�ǹ����й����Ļ���һ����Ȥ����ɲ��֡����������˻�ȭ�ķ���Ϊ��ÿ�˿��к���һ�����֣�ͬʱ���ֱȻ���һ�����֡�
���˭�Ȼ������������õ������˺���������֮�ͣ�˭��Ӯ�ˣ���ҷ�һ���ơ�����ͬӮ������ͬ���������һ�֣�ֱ��Ψһ��Ӯ�ҳ��֡�

��������ס������˵Ļ�ȭ��¼������ͳ���������ֱ���˶��ٱ��ơ�

�����ʽ��

�����һ���ȸ���һ��������N��<=100�������N�У�ÿ�и���һ�ֻ�ȭ�ļ�¼����ʽΪ��

�׺� �׻� �Һ� �һ�

���С������Ǻ��������֣��������ǻ��������֣���Ϊ������100������������ֻ��һ�𻮣���

�����ʽ��

��һ�����Ⱥ�����ס������˺ȾƵı����������һ���ո�ָ���
*/
 #include<stdio.h>
 #include<iostream>
 #define MAXSIZE 100
 using namespace std;
 int main(){
 	int drink_A = 0;
 	int drink_B = 0;
 	int done_A[MAXSIZE];
 	int say_A[MAXSIZE];
 	int done_B[MAXSIZE];
 	int say_B[MAXSIZE];
 	int times;
 	cin >> times;
 	for(int i = 0;i < times;i++){
 		cin >> say_A[i] >> done_A[i] >> say_B[i] >> done_B[i];
	}
	for(int i = 0;i < times;i++){
		if(done_A[i] == say_A[i] + say_B[i] && done_B[i] != say_A[i] + say_B[i]){
			drink_B++;
		}
		else if(done_A[i] != say_A[i] + say_B[i] && done_B[i] == say_A[i] + say_B[i]){
			drink_A++;
		}
	}
	cout << drink_A << " " << drink_B;
 	return 0;
 }
