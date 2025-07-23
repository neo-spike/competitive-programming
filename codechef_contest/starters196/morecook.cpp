#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		int n,c;
		cin>>n>>c;
		vector <int> a(n);
		for (int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a.begin(), a.end());
		bool q1=false;
		if (c>a[0]){
			q1=true;
		}
		bool q2=true;
		int ans=0;
		if (q1==false){
			q1=true;
			ans+=a[0]-c;
			c+=ans;
		}
		if (q1){
		for (int i=0; i<n; i++){
			if (a[i]==c){
				q2=false;
			}
			if (q2==false){
				for (int j=i; j<n; j++){
					if (c==a[j]){
						if (j<n-1){
		
						int diff=abs(a[j+1]-a[j]);
						if (diff >1){
							ans+=1;
							break;
						}
						else{
							ans+=diff;
						}
						c+=diff;
						}
						else{
							ans+=1;
							c+=1;
						}
					}
					else{
						break;
					}
				}
				break;
			}

		}
		}
	
		cout<<ans<<endl;

	}
	return 0;
}
