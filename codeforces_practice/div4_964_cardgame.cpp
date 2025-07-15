#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while (t--){
		int l,r,m,n;
		cin>>l>>r>>m>>n;
		int tmp = l;
		l = min(l,r);
		if (l!=tmp){
			r=tmp;
		}
		tmp = m;
		m=min(m,n);
		if (m!=tmp){
			n=tmp;
		}

		if (r>=n && (l!=m || r!=n)){
			if (l>=m){
				if (l>=n){
					cout<<4<<endl;
				}
				else if (l<n){
					cout<<2<<endl;
				}
				else{
					cout<<0<<endl;
				}
			}
			else{
				cout<<0<<endl;
			}
			
		}	
		else{
			cout<<0<<endl;
		}
	}	
	return 0;
}
