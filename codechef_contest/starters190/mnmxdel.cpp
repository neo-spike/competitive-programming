#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        int n, q;
        cin >> n >> q;
        vector<long long> A(n);

        for (int i = 0; i < n; i++)
            cin >> A[i];

        // Initial score
        long long score = 0;
        for (int i = 0; i < n - 1; i++)
        {
            score += min(A[i], A[i + 1]);
        }

        while (q--)
        {
            int i;
            long long x;
            cin >> i >> x;
            --i; 

            // Subtract old contributions
            if (i > 0)
                score -= min(A[i - 1], A[i]);
            if (i < n - 1)
                score -= min(A[i], A[i + 1]);

            A[i] = x;

            // Add new contributions
            if (i > 0)
                score += min(A[i - 1], A[i]);
            if (i < n - 1)
                score += min(A[i], A[i + 1]);

            cout << score << "\n";
        }
        t--;
    }

    return 0;
}
