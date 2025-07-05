#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int on=0;
	    int tw=0;
	    cin>>n;
	    vector<int> a(n);
	    for (int i=0; i<n; i++){
	        cin>>a[i];
	        if (a[i]==1){
	            on++;
	        }
	        else{
	            tw++;
	        }
	        
	    }
	    if (on==0 || tw==0){
	        cout<<0<<endl;
	    }
	    else{
	        if (on%2==0){
	            int a = on/2;
	            if (a<=tw){
	                cout<<a<<endl;
	            }
	            else{
	                cout<<tw<<endl;
	            }
	        }
	        else{
	            cout<<tw<<endl;
	        }
	    }
	    
	}

}
