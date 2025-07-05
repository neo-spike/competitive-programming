#include <bits/stdc++.h>
using namespace std;

//memoization
vector<long long>a;

long long fib(long long n){
    if (n==1) return 1;
    if (n==2) return 1;
    if (a[n]!=0){
        return a[n];
    }
    return a[n] = fib(n-1) + fib(n-2);
}


int main(){
    long long n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}