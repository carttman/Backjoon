#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	unordered_set<int> st;

	for (int i=0; i<n; i++)
	{
		int a;
		cin >> a;
		st.insert(a);
	}

	int m;
	cin >> m;

	for (int i=0; i<m; i++)
	{
		int a;
		cin >> a;

		if (st.find(a) == st.end())
		{
			cout << 0 << " ";
		}
		else
		{
			cout << 1 << " ";
		}
	}

	return 0;
}