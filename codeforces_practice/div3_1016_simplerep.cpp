#include <bits/stdc++.h>
using namespace std;

void solve(){
	int x,y;
	cin>>x>>y;
	if (y>=2 && x>=2){
		cout<<"NO"<<endl;
		return;
	}
	if (x==1 && y>=3){
		cout<<"NO"<<endl;
		return;
	}
	if (x==1 && y==1){
		cout<<"NO"<<endl;
		return;
	}
	if (y==1){
		for (int i=2; i*i<=x; i++){
			if (x%i==0){
				cout<<"NO\n";
				return;
				break;
			}
		}
	}
	cout<<"YES\n";

}


int main(){
	int t;
	cin>>t;
	while (t--){
		solve();
	}
	return 0;
}
