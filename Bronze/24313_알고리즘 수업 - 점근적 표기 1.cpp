#include <iostream>

using namespace std;

int main()
{
	int a1, a0, c, n0;
	cin >> a1 >> a0 >> c >> n0;

	int ans = 1;

	if (c < a1)
		ans = 0;

	if ((c - a1) * n0 < a0)
		ans = 0;

	cout << ans;

	return 0;
}