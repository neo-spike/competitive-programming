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

        int index = 0;
        bool light = true;
        bool taken = false;
        if (n == 1)
        {
            if (s[0] == '0')
            {
                light = false;
            }
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (i == 0 && s[i] == '0')
                {
                    if (s[i + 1] == '0')
                    {
                        light = false;
                        break;
                    }
                }
                else if (i == s.size() - 1 && s[i] == '0')
                {
                    if (s[i - 1] == '0' || (taken == true && index==i-1))
                    {
                        light = false;
                        break;
                    }
                }

                if (s[i] == '0')
                {
                    // cout << i << endl;
                    if (s[i - 1] == '0' && s[i + 1] == '0' && i != 0 && i != s.size())
                    {
                        light = false;
                        break;
                    }
                    else if (taken == false)
                    {
                        // cout << s[i] << " " << i << endl;

                        if (s[i - 1] == '1' && i != 0)
                        {
                            taken = true;
                            index = i - 1;
                        }
                        if (taken == false && s[i + 1] == '1' && i != s.size())
                        {
                            taken = true;
                            index = i + 1;
                        }
                    }
                    else if (taken == true)
                    {
                        // cout << s[i] << " " << i << endl;

                        if (s[i - 1] == '1' && index == i - 1)
                        {
                            // cout << s[i] << " " << i << endl;
                            if (s[i + 1] == '1')
                            {
                                index = i + 1;
                            }
                            else
                            {
                                light = false;
                                // cout << i << endl;
                                break;
                            }
                        }
                        else if (s[i - 1] == '1' && index != i - 1)
                        {
                            index = i - 1;
                            taken=true;
                        }
                        else if (s[i+1]=='1' && index!=i+1 && i!=s.size()-1){
                            index=i+1;
                            
                        }
                    }
                }
            }
        }
        if (light)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }

        t--;
    }
}
