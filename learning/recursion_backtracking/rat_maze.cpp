#include <bits/stdc++.h>
using namespace std;

bool valid(int x, int y, vector<vector<int>> &g, vector<vector<bool>>& v, int r, int c){
	return x>=0 && y>=0 && x<c && y<r && g[x][y]!=0 && v[x][y]==false;
}

void solve(vector <vector <int>>& g, int x, int y, vector<vector<bool>> &visited, string path, int r, int c){
	if (x==c-1 && y==r-1){
		cout<<path<<endl;
		return;
	}
	visited[x][y]=true;
	if (valid(x+1, y, g, visited, r, c)) solve(g, x+1, y, visited, path+'D', r, c);
	if (valid(x-1, y, g, visited, r, c)) solve(g, x-1, y, visited, path+'U', r, c);
	if (valid(x, y-1, g, visited, r, c)) solve(g, x, y-1, visited, path+'L', r, c);
	if (valid(x, y+1, g, visited, r, c)) solve(g, x, y+1, visited, path+'R', r, c);

	visited[x][y]=false;
}

int main(){
	int x,y;
	cin>>x>>y;
	vector <vector<int>> grid(y, vector <int> (x));

	for (int i=0; i<y; i++){
		for (int j=0; j<x; j++){
			cin>>grid[i][j];
		}
	}

	for (const auto& r: grid){
		for (int val: r){
			cout<<val<<" ";
		}
		cout<<endl;
	}
	vector<vector<bool>> v(y, vector<bool>(x, false));
	string path="";

	solve(grid, 0, 0, v, path, x, y);

	return 0;
}
