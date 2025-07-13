#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		int n, x;
		long long k;
		cin >>n >>x>>k;
		string s;
		cin>>s;
		int i = 0;
		long long cnt = 0;
		bool start = false;
		for (int i=0; i<n; i++){
			if (s[i] == 'L'){
				x--;
			}
			else{
				x++;
			}
			k--;
			if (!x){
				break;
			}

		}
		
		if (!x){
			cnt=1;
			for (int i=0; i<n; i++){
				if (s[i]=='L'){
					x--;
				}
				else{
					x++;
				}
				if (!x){
					cnt+=k/(i+1);
					break;
				}
			}
		}
		
		cout<<cnt<<endl;
	
	}
	
	return 0;
}
