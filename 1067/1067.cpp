#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string password,correct;
	cin >> correct >> n;
	int cnt = 0;
	getchar();//去除掉上一次的换行符 
	while(1){
		getline(cin,password);//需用getline,cin要将换行符储存 
		if(password == "#")
			break;
		cnt++;
		if(cnt <= n && password == correct){
			cout << "Welcome in" <<  endl;
			break;
		}
		if(cnt <= n && password != correct){
				cout << "Wrong password: " << password << endl;//先输入后在说明是否超出限度 
			if(cnt == n){
				cout << "Account locked" << endl;
				break;
			}
		}
	}
	return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<string> password;
	string tmp(""),correct;
	int n;
	cin >> correct >> n;
	getchar();
	while(tmp != "#"){
	//	cin >> tmp; 
		getline(cin,tmp);
		password.push_back(tmp);
	}
	bool find = false;
	int cnt = 0;
	for(int i = 0;i < n;i++){
		if((password[i].compare(correct)) == 0){
			printf("Welcome in\n");
			find = true;
		}
		else{
				cout << "Wrong password: " << password[i] << endl;
		}
		cnt ++;
	}
	if(!find && cnt == n + 1)
		cout << "Account locked";
	return 0;
}
*/ 
