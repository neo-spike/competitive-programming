#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for (int i=0; i<n; i++){
			cin>>a[i];
		}
		
		// check both endings
		// check for minimum sum of numbers throughout 

		int p = min(a[0], a[n-1]);
		int l = min(a[0], a[1]);
		int k = max(a[0], a[1]);

		for (int i=2; i<n; i++){
			if (a[i]<l){
				k=l;
				l=a[i];
			}
			else{
				k=min(a[i], k);
			}
		}
		cout<<min(p, l+k)<<endl;

	}
	return 0;
}
