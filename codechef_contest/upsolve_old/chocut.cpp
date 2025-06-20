#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        float n,m,k,c,d;
        cin>>n>>m>>k;
        float a = k/n;
        float b = k/m;
        if ((int)(k/n) == a){
            c=k;
        }
        else if ((int)(k/n) != k/n){
            c = ((int)(k/n)+1)*n;
        }
        if ((int)(k/m) == b){
            d=k;
        }
        else if ((int)(k/m) != k/m){
            d = ((int)(k/m)+1)*m;
        }
        cout<<(int)(n*m-min(c,d))<<endl;
    }
    
    return 0;
}