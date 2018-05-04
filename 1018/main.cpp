#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
char max(int arr[]){
	int MAX = arr[0];
	int max_pos = 0;
	for(int i = 0;i < 3;i++){
		if(MAX < arr[i]){
			MAX = arr[i];
			max_pos = i;
		} 
	}
	if(max_pos == 0)
		return 'B';
	else if(max_pos == 1)
		return 'C';
	else
		return 'J';
}
int main(){
	int times;
	cin >> times;
	int A_win = 0,A_lose = 0;
	int B_win = 0,B_lose = 0;
	int same = 0;
	char A;
	char B;
	int p_A[3] = {0};
	int p_B[3] = {0};
	int i;
	for(i = 0;i < times;i++){
		//cin >> A >> B;
		//getchar();
		scanf("%c%c",&A,&B);
		fflush(stdin); 
		//getchar();
		if(A == 'C' && B == 'J'){
			A_win++;
			B_lose++;
			p_A[1]++; 
		}
		else if(A == 'J' && B == 'C'){
			B_win++;
			A_lose++;
			p_B[1]++; 
		}
		else if(A == 'B' && B == 'J'){
			B_win++;
			A_lose++; 
			p_B[2]++; 
		}
		else if(A == 'J' && B == 'B'){
			A_win++;
			B_lose++;
			p_A[2]++;  
		}
		else if(A == 'C' && B == 'B'){
			B_win++;
			A_lose++;
			p_B[0]++; 
		}
		else if(A == 'B' && B == 'C'){
			A_win++;
			B_lose++; 
			p_A[0]++; 
		}
		else if(A == B)
			same++; 
	//	cout << A_win << endl;     
	}
	cout << A_win <<" "<< same << " " <<A_lose << endl;
	cout << B_win <<" "<< same << " " <<B_lose << endl;
	cout << max(p_A) <<" "<< max(p_B);
	return 0;
} 
