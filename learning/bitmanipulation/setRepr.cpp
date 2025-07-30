#include <bits/stdc++.h>
using namespace std;

int setEncrypt(vector <int> & a){
	int x=0;
	for (int i=0; i<a.size(); i++){
		x |= (1<<a[i]);
	}
	return x;
}

void setDecrypt(int x){
	for (int i=0; i<32; i++){
		if (x&(1<<i)) cout<<i<<" ";
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	vector <int> a(n);
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	int x = setEncrypt(a);
	cout<<x<<endl;
	setDecrypt(x);

	return 0;
}
