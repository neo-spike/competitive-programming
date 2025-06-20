#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	if (n%3==0){
	    cout<<"0"<<endl;
	}
	else{
	    int a = (int)(n/3);
	    if (n-3*a < abs(n-3*(a+1))){
	        cout<<n-3*a<<endl;
	    }
	    else{
	        cout<<abs(n-3*(a+1))<<endl;
	    }
	}

}
