#include <iostream>
#include <cmath>
using namespace std;
int Z(int n, int r, int c) {
    if (n == 0) return 0; // �迭 ũ�Ⱑ 1��1�� ��
    int half = 1 << (n - 1); // ���� �迭�� �� ���� ���� ����
    int quadrant_size = half * half; // �� ��и��� ũ��
    // 1��и�
    if (r < half && c < half) {
        return Z(n - 1, r, c);
    }
    // 2��и�
    else if (r < half && c >= half) {
        return quadrant_size + Z(n - 1, r, c - half);
    }
    // 3��и�
    else if (r >= half && c < half) {
        return 2 * quadrant_size + Z(n - 1, r - half, c);
    }
    // 4��и�
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