#include <iostream>

using namespace std;

int main() {
    int n, k;
    
    while (cin >> n >> k) {
        int ans = 0;
        int stamp = 0;
        int coupon = n;
        while (coupon) {
            ans += coupon;
            stamp += coupon;
            coupon = stamp / k;
            stamp %= k;
        }
        cout << ans << "\n"; 
    }
    return 0;
}