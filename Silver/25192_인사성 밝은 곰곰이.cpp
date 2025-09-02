#include <iostream>
#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	int cnt = -1;

	set<string> st;

	for (int i=0; i<t; i++)
	{
		string s;
		cin >> s;

		if (i && s == "ENTER")
		{
			st.clear();
			continue;
		}

		if (st.find(s) != st.end())
			continue;

		st.emplace(s);
		cnt++;
	}

	cout << cnt;

	return 0;
}