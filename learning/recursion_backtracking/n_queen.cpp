#include <bits/stdc++.h>
using namespace std;

bool safe(int r, int c, vector <string> &b, int n){
	for (int i=0; i<r; i++){
		if (b[i][c]=='Q') return false;
	}
	for (int i=r-1, j=c-1; i>=0 && j>=0; i--, j--){
		if (b[i][j]=='Q') return false;
	}
	for (int i=r-1, j=c+1;i>=0 && j<n; i--, j++){
		if (b[i][j]=='Q') return false;
	}
	return true;
}

void solve(int y, vector<string> &b, int n){
	if (y==n){
		for (string s: b){
			cout<<s<<endl;
		}
		cout<<"----------\n";
		return;
	}
	
	for (int i=0; i<n; i++){
		if (safe(y, i, b, n)){
			b[y][i]='Q';
			solve(y+1, b, n);
			b[y][i]='.';
		}
	}
}

int main(){
	int n;
	cin>>n;
	vector <string> board(n,string(n, '.'));
	/*
	for (int i=0; i<n; i++){
		cout<<board[i];
		cout<<endl;
	}
	*/
	//solving
	solve(0, board, n);

	return 0;
}
