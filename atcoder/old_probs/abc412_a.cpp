#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    int cnt=0;
    for (int i=0; i<n; ++i){
        cin>>a[i]>>b[i];
        if (b[i]>a[i]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}