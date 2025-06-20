#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--)
    {
        int a,b,c,d, k;
        cin>>a>>b>>c>>d>>k;
        int x = abs(c-a);
        int y = abs(d-b);
        int n = x+y;
        if (k>=n && ((n%2==0 && k%2==0)||(n%2!=0 && k%2!=0))){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
    
    return 0;
}
