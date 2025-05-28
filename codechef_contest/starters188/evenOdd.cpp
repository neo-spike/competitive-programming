#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
        int n;
        cin>>n;
        vector<int> a(n);
        int odd=0;
        int even=0;
        for (int i=0; i<n; i++){
            cin>>a[i];
            if (i%2==0)
            {
                even=even+a[i];
            }
            else
            {
                odd = odd+a[i];
            }
        }
        if (odd>even){
            cout<<odd<<endl;
        }
        else{
            cout<<even<<endl;
        }
        
        
        
	    t--;
	}

}
