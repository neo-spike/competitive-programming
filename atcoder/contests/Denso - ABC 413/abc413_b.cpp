#include <bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 vector <string> a(n);
 for (int i=0; i<n; i++){
 	cin>>a[i];
 }
 set<string> b;
 for (int i=0; i<n; i++){
 	for (int j=0; j<n; ++j){
 		if (i!=j){
 			b.insert(a[i]+a[j]);
 		}
 	}	 
 }
 cout<<b.size()<<endl;

 return 0;
}
