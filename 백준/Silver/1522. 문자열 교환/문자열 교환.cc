#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;

	int a = 0;
	int ans = s.size();

	for (int i = 0; i < s.size(); i++)
		if (s[i] == 'a')
			a++;

	for (int i = 0; i < s.size(); i++)
	{
		int cnt = a;
		int tmp = 0;

		for (int j = i; j < i + s.size(); j++)
		{
			if (cnt == 0)
				break;
			if (s[j % s.size()] == 'b')
			{
				tmp++;
				cnt--;
			}
			else
				cnt--;
		}
		ans = min(ans, tmp);
	}

	cout << ans;
	return 0;
}