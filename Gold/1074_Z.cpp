#include <iostream>
using namespace std;

int Z(int n, int r, int c)
{
    if (n == 0) return 0; // 배열 크기가 1×1일 때
    int half = 1 << (n - 1); // 현재 배열의 한 변의 절반 길이
    int quadrant_size = half * half; // 각 사분면의 크기

    if (r < half && c < half) // 1사분면
    {
        return Z(n - 1, r, c);
    }
    else if (r < half && c >= half) // 2사분면
    {
        return quadrant_size + Z(n - 1, r, c - half);
    }
    else if (r >= half && c < half) // 3사분면
    {
        return 2 * quadrant_size + Z(n - 1, r - half, c);
    }
    else // 4사분면
    {
        return 3 * quadrant_size + Z(n - 1, r - half, c - half);
    }
}
int main()
{
    int n, r, c;
    cin >> n >> r >> c;

    cout << Z(n, r, c) << endl;

    return 0;
}