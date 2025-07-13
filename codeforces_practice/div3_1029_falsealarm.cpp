#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		vector<int> a(n);
		for (int i=0; i<n; i++){
			cin>>a[i];
		}
		bool used=false;
		bool pass = true;
		for (int i=0; i<n; i++){
			if (a[i] == 1){
				used=true;
				if (x==0){
					pass=false;
				}
			}
			if (used==true){
				if (x>0){
					x--;
					
					
				}
			
				
			}
			if (used==true && x==0 && a[i]==0){
				used=false;
			}
		}
		if (pass){
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}
	}
	return 0;
}
