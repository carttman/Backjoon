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
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<string> a(n);
	vector<string> b(n);

	for (int i = 0; i < n; i++)
		cin >> a[i];

	b = a;

	for (int i = 0; i < n; i++)
		reverse(a[i].begin(), a[i].end());

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (a[i][j] != '.')
				b[i][j] = a[i][j];

	for (int i = 0; i < n; i++)
		cout << b[i] << '\n';
	return 0;
}