#include <iostream>
using namespace std;

string isPossible(int x, int y, int z) {
    if (x == 0) return "Yes"; 
    if (z == 0) return "No";  
    if (y == 0 && x > z + 1) return "No"; 
    if (y > 0 && (x > z)) return "No"; 
    return "Yes";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        cout << isPossible(x, y, z) << endl;
    }
    return 0;
}
