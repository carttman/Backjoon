#include <iostream>
#include <cmath>
using namespace std;
int Z(int n, int r, int c) {
    if (n == 0) return 0; // 배열 크기가 1×1일 때
    int half = 1 << (n - 1); // 현재 배열의 한 변의 절반 길이
    int quadrant_size = half * half; // 각 사분면의 크기
    // 1사분면
    if (r < half && c < half) {
        return Z(n - 1, r, c);
    }
    // 2사분면
    else if (r < half && c >= half) {
        return quadrant_size + Z(n - 1, r, c - half);
    }
    // 3사분면
    else if (r >= half && c < half) {
        return 2 * quadrant_size + Z(n - 1, r - half, c);
    }
    // 4사분면
    else {
        return 3 * quadrant_size + Z(n - 1, r - half, c - half);
    }
}
int main() {
    int N, r, c;
    cin >> N >> r >> c;
    cout << Z(N, r, c) << endl;
    return 0;
}