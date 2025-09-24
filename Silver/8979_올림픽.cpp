#include <iostream>
#include <algorithm>

using namespace std;

struct medal
{
	int country;
	int gold;
	int silver;
	int bronze;
};

bool compare(medal m1, medal m2)
{
	if (m1.gold == m2.gold)
	{
		if (m1.silver == m2.silver)
			return m1.bronze > m2.bronze;
		
		return m1.silver > m2.silver;
	}
	return m1.gold > m2.gold;
}

medal medals[1001];
int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> medals[i].country >> medals[i].gold >> medals[i].silver >> medals[i].bronze;
	}

	sort(medals, medals + n, compare);

	int ans;
	for (int i = 0; i < n; i++)
	{
		if (i == 0 || !(medals[i].gold == medals[i - 1].gold &&
			medals[i].silver == medals[i - 1].silver &&
			medals[i].bronze == medals[i - 1].bronze))
			ans = i + 1;

		if (medals[i].country == m)
		{
			cout << ans;
			break;
		}
	}

	return 0;
}