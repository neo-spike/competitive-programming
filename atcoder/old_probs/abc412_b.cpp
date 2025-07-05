#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    bool res = true;
    for (int i=1; i<s.size(); ++i){
        if (int(s[i])>=65 && int(s[i])<=90){
            int cnt=0;
            for (int j=0; j<t.size(); ++j){
                if (t[j]==s[i-1]){
                    cnt++;
                }
            }
            if (cnt==0){
                res=false;
                break;
            }
        }
    }
    if (res){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    return 0;
}