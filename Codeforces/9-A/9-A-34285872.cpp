#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int x, y; cin >> x >> y;
    int ans = 7 - max(x, y);
    cout << ans / __gcd(ans, 6) << "/" << 6 / __gcd(ans, 6);
    return 0;
}