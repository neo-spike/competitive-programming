#include <bits/stdc++.h>
using namespace std;

void getSubsets(vector <int> &a, int k, vector <int> &s){
	if (k==a.size()){
		cout<<"{";
		for (int num: s){
			cout<<num<<",";
		}
		cout<<"}\n";
		return ;

	}
		s.push_back(a[k]);
		getSubsets(a, k+1, s);

		s.pop_back();
		getSubsets(a, k+1, s);
	

}

int main(){
	int n;
	cin>>n;
	vector <int> a(n);
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	vector <int> subset;
	getSubsets(a, 0, subset);
	return 0;
}
