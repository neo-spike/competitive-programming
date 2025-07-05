#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int minN = 500;
        int index = 500;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int c = min(a[i], minN);
            if (c < minN)
            {
                index = i;
                minN = c;
                // cout << i << c << endl;
            }
        }
        // int start = a[0];
        // cout<<index<<" "<<minN<<endl;
        if (index == 0)
        {
            cout << a[0] << endl;
        }
        // else if (a[index]-index+1<0){
        //     int x;
        //     for (int i=1; i<n; ++i){
        //         if (i!= index){

        //             if (i==1){
        //                 x = 1+a[1];
        //             }
        //             else{
        //                 int y = a[i]+1;
        //                 if (min(y, x)<x){
        //                     x = min(y,x);
        //                 }
        //             }
        //         }
        //     }
        //     cout<<x<<endl;
        // }
        // else
        // {
        //     int res = (index) + (a[index] - index) + 1;
        //     cout << res << endl;
        // }
        else{
            int x;
            for (int i = 1; i < n; i++)
            {
                if (i==1){
                    x = a[i]+1;
                }
                else if (a[i]-index+1>=0){
                    int b;
                    if (a[i]-index<0){
                        b = index;
                    }
                    else {
                        b= a[i]+1;
                    }
                    x = min(b,x);
                    
                }
            }
            cout<<x<<endl;
            
        }
    }

    return 0;
}
