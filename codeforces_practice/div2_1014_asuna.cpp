#include <bits/stdc++.h>
using namespace std;

int main(){
	int tt;
	cin>>tt;
	while (tt--){
		int n;
		cin>>n;
		vector <long long> a(n);
		vector <long long> o(n);
		vector <long long> e(n);
		int m=0;
		int x=0;
		long long sum=0;
		long long maxG = 0;
		for (int i=0; i<n; i++){
			cin>>a[i];
			if (a[i]%2==0){
				e[m] = a[i];
				m++;
			}
			else{
				o[x] = a[i];
				x++;
			}
			maxG = max(maxG, a[i]);
			sum+=a[i];
		}
		
		if (m==0 || x==0){
			cout<<maxG<<endl;
		}
		else{
			cout<<sum-x+1<<endl;
		}


		
	}
	return 0;
}
