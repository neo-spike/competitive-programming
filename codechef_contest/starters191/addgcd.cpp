#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long x,y;
	    cin>>x>>y;
        int gcd = __gcd(x,y);
        int count=0;
        if (gcd!=1){
            cout<<"0"<<endl;
        }
        else{
            while (gcd==1)
            {
                
                if ((x%2!=0 && y%2==0) ||(x%2==0 && y%2!=0)){
                    count=1;
                    break;
                }
                int a = __gcd(x+1, y);
                int b = __gcd(x+1, y+1);
                int c = __gcd(x, y+1);
                
                if ((a==1 || c==1)||(c>1 && a>1)){
                    if (c>1 || a>1){
                        count=1;
                        gcd=max(a,c);
                        break;
                    }
                    else if (count==0){
                        gcd = b;

                        count=2;
                        break;
                    }
                }
                else if (count==0){
                    gcd =b;
                    count=2;
                    break;
                }

                
            }
            
            cout<<count<<endl;
        }
        
	    
	}
    return 0;
}
