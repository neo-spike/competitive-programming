#include <bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 int s = n-1;
 vector<int> a(s);
 for (int i=0; i<s; i++){
	cin>>a[i];
 }
 for (int i=0; i<s; i++){
	int sum=0;
	for (int j=i; j<s; j++){
		sum += a[j];
		cout<<sum<<" ";
	}
	cout<<endl;
 }

 return 0;
}
