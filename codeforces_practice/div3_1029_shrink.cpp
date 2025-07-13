#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <int> a(n);
		for (int i =0; i<n; i++){
			a[i] = i+1;
		}
		int c = a[n-1];
		a[n-1] = a[n-2];
		a[n-2] = c;

		int k=1;
		int l = n-1;
		if (n!=3){

			while(not(l<=k)){
				int b = a[k];
				a[k] = a[l];
				a[l] = b;
				l--;
				k +=2;
			}
		}
		for (int i=0; i<n; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
