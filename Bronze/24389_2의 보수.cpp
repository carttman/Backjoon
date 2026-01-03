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

	int n;
	cin >> n;

	bitset<32> a = n;
	bitset<32> b = -n;

	int cnt = 0;
	for (int i=0; i<32; i++)
		if (a[i] != b[i])
			cnt++;

	cout << cnt;
	return 0;
}