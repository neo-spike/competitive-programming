#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		int n,k;
		cin>>n>>k;
		vector <int> a(n);

		for (int i=0; i<n; i++){
			cin>>a[i];
		}
		int cnt=0;
		int i=0;
		while (i<=n-k){
			bool g=true;
			for (int j=0; j<k; j++){
				if (a[i+j]==1){
					g=false;
					break;
				}
			}
			if (g){
				cnt++;
				i+=k+1;
			}
			else{
				i++;
			}
		}
		cout<<cnt<<endl;
		
	}
	return 0;
}
