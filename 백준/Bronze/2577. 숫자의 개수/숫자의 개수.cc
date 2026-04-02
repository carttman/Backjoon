#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ans[10] = {};

    long long a, b, c;
    cin >> a >> b >> c;

    long long sum = a * b * c;

    string s = to_string(sum);

    for (int i = 0; i < s.size(); i++)
        ans[s[i] - '0']++;

    for (const auto& i : ans)
        cout << i << '\n';

    return 0;
}
