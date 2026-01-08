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

struct stnt
{
	string name;
	int a, b, c;
};

bool cmp(stnt& s1, stnt& s2)
{
	if (s1.a == s2.a && s1.b == s2.b && s1.c == s2.c)
		return s1.name < s2.name;

	if (s1.a == s2.a && s1.b == s2.b)
		return s1.c > s2.c;

	if (s1.a == s2.a)
		return s1.b < s2.b;

	return s1.a > s2.a;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<stnt> stnts(n);

	for (int i = 0; i < n; i++)
		cin >> stnts[i].name >> stnts[i].a >> stnts[i].b >> stnts[i].c;

	sort(stnts.begin(), stnts.end(), cmp);

	for (const auto& i : stnts)
		cout << i.name << '\n';

	return 0;
}