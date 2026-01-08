#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <deque>
#include <limits.h>
#include <cmath>
#include <map>
#include <queue>
#include <set>
using namespace std;

int GCD(int a, int b)
{
	if (b == 0)
		return a;

	return GCD(b, a % b);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<int> rad(n);
	for (int i = 0; i < n; i++)
		cin >> rad[i];

	for (int i = 1; i < n; i++)
	{
		int gcd = GCD(rad[0], rad[i]);

		if (gcd == 1)
			cout << rad[0] << '/' << rad[i] << '\n';
		else
			cout << rad[0] / gcd << '/' << rad[i] / gcd << '\n';
	}

	return 0;
}