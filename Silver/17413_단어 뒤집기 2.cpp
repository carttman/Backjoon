#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	getline(cin, s);

	s += ' ';

	stack<char> st;

	bool flag = false;

	for (int i=0; i<s.size(); i++)
	{
		if (s[i] == '<')
		{
			flag = true;

			if (!st.empty())
			{
				while (!st.empty())
				{
					cout << st.top();
					st.pop();
				}
			}
		}
		else if (s[i] == '>')
		{
			cout << s[i];
			flag = false;
			continue;
		}

		if (flag)
		{
			cout << s[i];
		}
		else
		{
			if (s[i] == ' ')
			{
				while (!st.empty())
				{
					cout << st.top();
					st.pop();
				}
				cout << s[i];
			}
			else
			{
				st.push(s[i]);
			}
		}
	}
	return 0;
}