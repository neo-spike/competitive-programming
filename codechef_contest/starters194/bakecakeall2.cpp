#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		int sum=0;
		vector <int> a(n);
		vector <int> b(n);
		for (int i=0; i<n; i++){
			cin>>a[i];
		}
		for (int i=0; i<n; i++){
			cin>>b[i];
			if (b[i]<a[i]){
				sum+=a[i]-b[i];
			}
		}
		cout<<sum<<endl;
	}
}
