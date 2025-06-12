#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	a=a+1;
    int t=a*4+b*3;
    int rem = t%8;
    if (rem==0){
        cout<<(int)t/8<<endl;
    }
    else{
        cout<<(int)t/8 + 1<<endl;
    }

}
