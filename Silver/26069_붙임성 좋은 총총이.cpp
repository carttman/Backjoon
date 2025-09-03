#include <iostream>
#include <set>

using namespace std;

int main()
{
	int t;
	cin >> t;

	set<string> st;

	st.emplace("ChongChong");

	while (t--)
	{
		string s1, s2;
		cin >> s1 >> s2;

		if (st.count(s1) || st.count(s2))
		{
			st.emplace(s1);
			st.emplace(s2);
		}
	}

	cout << st.size();
}