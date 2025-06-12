#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    bool nElem=false;
	    for (int i=0; i<n; ++i){
	        cin>>a[i];
	        if (i!=0){
	            if (a[i]!=a[i-1]){
	                nElem=true;
	            }
	        }
	    }
	    if(nElem){
	        cout<<2<<endl;
	    }
	    else
	    {
	        cout<<-1<<endl;
	    }
	    
	    t--;
	}

}
