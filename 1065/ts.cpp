#include<bits/stdc++.h>
using namespace std;

int main(){
	int myints[] = {1,2,3,4,5};
	set<int> myset(myints,myints + 5);
	set<int>::reverse_iterator rit;
	for(rit = myset.rbegin();rit != myset.rend();rit++){
		cout << *rit <<  " ";
	}
	return 0;
} 
