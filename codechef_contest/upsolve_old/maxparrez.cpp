// starter 190
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int n;
	    long long x;
	    cin>>n>>x;
        vector <long long> a(n);
        vector<long long> b(n);
        for (int i =0; i<n; i++){
            cin>>a[i];
        }

        for (int i =0; i<n; i++){
            cin>>b[i];
        }
        
        int score=0;
        bool done =true;
        // int count=0;
        for (int i=0; i<n; i++){
            if (x>=b[i]){
                x=x-1;
                score++;
            }
            if (x<a[i]){
                done =false;
                break;
            }

        }
        if (done==false){
            cout<<"0\n";
        }
        else{
            cout<<score<<endl;
        }



    
        // for (int i=0; i<n; i++){
            
        //     long long c;
        //     cin>>c;
        //     b[i]={i, c};

        // }    

        // sort(b.begin(), b.end(), [](const pair<int, long long>&p1, const pair<int, long long>& p2){
        //     if (p1.second != p2.second)
        //         return p1.second > p2.second;
        // });

        // for (auto c : b) {
        //     cout << "(" << c.first << ", " << c.second << ")" << endl;
        // }  
        
	    
	    t--;
	}
    return 0;
}
