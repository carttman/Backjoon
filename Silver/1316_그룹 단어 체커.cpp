#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int cnt = n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		bool isGroup = true;

		for (int j = 0; j < s.size(); j++)
		{
			bool check = true;
			for (int k = j + 1; k < s.size(); k++)
			{
				if (s[j] != s[k])
				{
					check = false;
				}
				else
				{
					if (!check)
					{
						isGroup = false;
						cnt--;
						break;
					}
				}
			}
			if (!isGroup)
				break;
		}
	}
	cout << cnt;

	return 0;
}