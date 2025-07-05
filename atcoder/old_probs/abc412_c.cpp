#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<a[i];
        // }


        auto cnt=1;
        int i= 1;
        while (i<=n-1)
        {
            bool lim = false;
            if (i==n-1){
                cnt++;
                break;
            }
            else{

                int k=i+1;
                long long r = a[i]*2;
                long long s = 1e9;
                int index = 0;
                while (a[k]<=r)
                {
                    // cout<<"."<<endl;
                    long long c = r-a[k];
                    long long b = min(s, c);
                    if (b<s){
                        s = b;
                        index = k ;
                        lim=true;
                    }
                    k++;
                }
                
                if (lim==true){
                    i = index;
                    // cout<<a[index]<<endl;
                    cnt++;
                }
                else{
                    break;
                }
            }
            
        }
        if (cnt==2){
            cout<<"-1\n";
        }
        else{

            cout<<cnt<<endl;
        }
        
        
        
    }
    
    return 0;
}