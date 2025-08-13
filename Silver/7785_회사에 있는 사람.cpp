#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	map<string, string, greater<>> mp;

	for (int i = 0; i < n; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;

		mp.insert({s1, s2});

		if (s2 == "leave")
		{
			mp.erase(s1);
		}
	}

	for (const auto& it : mp)
	{
			cout << it.first << "\n";
	}

	return 0;
}