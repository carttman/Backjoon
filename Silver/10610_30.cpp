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

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;

	sort(s.begin(), s.end(), greater<>());

	if (s[s.size() - 1] != '0')
		cout << -1;
	else
	{
		long long sum = 0;

		for (auto i : s)
			sum += i - '0';

		if (sum % 3 == 0)
			cout << s;
		else
			cout << -1;
	}


	return 0;
}