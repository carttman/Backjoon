#include <iostream>
#include <string>
using namespace std;
const int M = 1234567891;
const int R = 31;
int main()
{
    int L;
    string str;
    cin >> L >> str;

    long long hashValue = 0;
    long long power = 1; // R^i 값을 저장

    for (int i = 0; i < L; i++) 
    {
        int charValue = str[i] - 'a' + 1; // 'a' -> 1, 'b' -> 2, ...
        hashValue = (hashValue + charValue * power) % M;
        power = (power * R) % M; // R^i 값을 업데이트
    }

    cout << hashValue << endl;
    return 0;
}
