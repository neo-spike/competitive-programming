#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        long long n, k;
        cin>>n>>k;
        long long a =(int) n/k;
        cout<<(n-k*a)<<endl;
    }
    
    return 0;
}
