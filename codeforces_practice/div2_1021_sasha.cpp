#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long diff(int l, long long k)
{
    if (l==1)
    {
        return abs(k-l);
    }
    return abs(k-l) + diff(l-1, k);
}


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, k;
        cin>>n>>k;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
        cin >> arr[i];
        }

        for (int i=0; i<n; i++)
        {
            cout<<arr[i]<<endl;
            for (int j=0; j<=k; j++)
            {
                cout<<diff(n-j, arr[i])<<"|";
            }
            cout<<endl;
        }

        cout<<"---------------------------\n";
    }
    
    return 0;
}