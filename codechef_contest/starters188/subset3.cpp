#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0)
	{
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    vector<int> rem0;
	    vector<int> rem1;
	    vector<int> rem2;
	    bool got=false;
	    for (int i=0; i<n; i++){
	        cin>>a[i];
	        if (a[i]%3==0)
	        {
	            rem0.push_back(a[i]);
	        }
	        else if (a[i]%3==1)
	        {
	            rem1.push_back(a[i]);
	        }
            else if (a[i]%3==2)
            {
                rem2.push_back(a[i]);
            }
	    }

        if (rem0.size()>0)
        {
            cout<<"Yes\n";
            got=true;
        }
        else if (got==false)
        {
            if (rem1.size()>=3 || rem2.size() >=3)
            {
                got=true;
                cout<<"Yes\n";
            }
            else if (got==false)
            {
                int s1=rem1.size();
                int s2=rem2.size();

                if ((s1>=1 && s2>=1)||(s2>=2 && s1>=2))
                {
                    cout<<"Yes\n";
                    got=true;

                }
                if (got==false)
                {
                    cout<<"No\n";
                }

            }
        }
	     
	    t--;
	}
}