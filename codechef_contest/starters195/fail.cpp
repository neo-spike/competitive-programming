#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		vector <int> a(n);
		int sum=0;
		bool pass=true;
		for (int i=0; i<n; i++){
			cin>>a[i];
			sum+=a[i];
			int avg = sum/(i+1);
			if (avg<40){
				pass=false;
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
