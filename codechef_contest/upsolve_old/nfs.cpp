#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int u,v,a,s;
        cin>>u>>v>>a>>s;

        int b = u*u -2*a*s;
        int c = v*v;
        if (b<=c){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }

    }   
    
    return 0;
}
