#include <bits/stdc++.h>
using namespace std;

int main(){
 int n,m;
 cin>>n>>m;
 vector <int> a(n); 
 int sum=0;
 for (int i=0; i<n; i++){
 	cin>>a[i];
 	sum+=a[i];
 }
 if (sum>m){
 	cout<<"No\n";
 }
 else{
 	cout<<"Yes\n";
 }
 return 0;
}
