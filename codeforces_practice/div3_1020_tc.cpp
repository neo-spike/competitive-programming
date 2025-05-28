#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t!=0)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        string arr[n];

        for (int i=0; i<n; i++)
        {
            string ns;
            ns =s;
            if (s[i] == '1')
            {
                ns[i] = '0';
                arr[i]=ns;
            }
            else
            {
                ns[i]='1';
                arr[i]=ns;
            }
        }
        long long count=0;
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (arr[i][j]=='1'){
                    count++;
                }
            }
        }
        cout<<count<<endl;


        t--;
    }
    
    return 0;
}