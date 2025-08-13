#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	unordered_set<string> st;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		st.insert(s);
	}

	int cnt = 0;

	for (int i = 0; i < m; i++)
	{
		string s;
		cin >> s;

		if (st.find(s) != st.end())
		{
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}