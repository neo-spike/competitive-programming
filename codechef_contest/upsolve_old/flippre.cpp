#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            int oc = 0;
            int zc = 0;
            for (int j = 0; j <= i; j++)
            {
                if (s[j] == '1')
                {
                    oc++;
                }
                else
                {
                    zc++;
                }
            }
            if (oc == zc)
            {
               count++;
            }
        }

        cout<<(1<<count)<<endl;

        t--;
    }
    return 0;
}
