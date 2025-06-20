#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t!=0)
    {
        long l,r, n;
        long count=0;
        cin>>l>>r;
        n = r-l+1;
        
        if (l==r){
            count++;
        }
        else{
            count = 2*r-2*l+1;
        }
        cout<<count<<endl;  
        t--;
    }
    
    return 0;
}