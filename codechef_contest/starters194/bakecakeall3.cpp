#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		vector <int> a(n);
		vector <int> pr(n);
		for (int i=0; i<n; i++){
			cin>>a[i];
		}

		for (int i=0; i<n; i++){
			int p=0;
			for (int j=0; j<n; j++){
				if (a[i]>a[j]){
					p+=50*a[j] - 30*a[i];
				}
				else {
					p+=50*a[i]-30*a[i];
				}
			}
			pr[i] = p;
		}
		int maxp=0;
		for (int i=0; i<n; i++){
			maxp = max(maxp, pr[i]);
		}
		cout<<maxp<<endl;
	}
}
