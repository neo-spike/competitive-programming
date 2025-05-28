// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         int max_hp = 0;
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//             max_hp = max(max_hp, a[i]);
//         }

//         int ans = n; 
//         for (int d = 0; d <= max_hp; d++) {
//             int alive = 0;
//             for (int i = 0; i < n; i++) {
//                 if (a[i] > d) alive++;
//             }
//             ans = min(ans, d + alive);
//         }
//         cout << ans << "\n";
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        int ans = n; // kill all one by one

        // damage level d = a[i]
        for (int i = 0; i < n; i++) {
            int d = a[i];
            int alive = n - (upper_bound(a.begin(), a.end(), d) - a.begin());
            ans = min(ans, d + alive);
        }
        cout << ans << "\n";
    }
}
