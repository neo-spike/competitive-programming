// beginner contest 408
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; ++i){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int m=0;
    for (int i=0; i<n; ++i){
        if (i==0){
            m++;
        }
        else if (a[i]!=a[i-1]){
            m++;
        }
    }
    cout<<m<<endl;
    for (int i=0; i<n; ++i){
        if (i==0){
            cout<<a[i]<<" ";
        }
        else if (a[i]!=a[i-1]){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}