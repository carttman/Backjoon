#include <iostream>
#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;
	cin >> a >> b;

	set<int> sta;
	for (int i = 0; i < a; i++)
	{
		int n;
		cin >> n;

		sta.insert(n);
	}

	set<int> stb;
	for (int i = 0; i < b; i++)
	{
		int n;
		cin >> n;
		stb.insert(n);
	}

	int cnt = 0;
	for (const auto& it : sta)
	{
		if (stb.find(it) == stb.end())
		{
			cnt++;
		}
	}

	for (const auto& it : stb)
	{
		if (sta.find(it) == sta.end())
		{
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}