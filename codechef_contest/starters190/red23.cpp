#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t!=0){
	    int x;
	    cin>>x;
	    
	    while (true){
	        if (x==3 || x==1){
	            break;
	        }
	        else{
	            if (x<3){
                    x=x/2;
                }
                else{
                    if (x%2==0){
                        x=min(x/2, x-3);
                    }
                    else{
                        x=x-3;
                    }
                }
	        }
	    }
	    cout<<x<<endl;
	    
	    t--;
	}

}
