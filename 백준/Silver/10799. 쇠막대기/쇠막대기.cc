#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;

	stack<int> stk;
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(' && s[i + 1] == ')')
		{
			cnt += stk.size();
			i++;
		}
		else if (s[i] == '(')
			stk.push(i);
		else if (s[i] == ')')
		{
			cnt++;
			stk.pop();
		}
	}

	cout << cnt;

	return 0;
}