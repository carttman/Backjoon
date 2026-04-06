#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);

	stack<char> st;

	bool flag = false;
	string temp = "";
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '<')
		{
			while (!st.empty())
			{
				cout << st.top();
				st.pop();
			}
			flag = true;
			temp += s[i];
		}
		else if (s[i] == '>')
		{
			flag = false;
			temp += s[i];

			cout << temp;
			temp = "";


		}
		else if (s[i] == ' ' && !flag)
		{
			while (!st.empty())
			{
				cout << st.top();
				st.pop();
			}
			cout << s[i];
		}
		else if (!flag)
			st.push(s[i]);
		else if (flag)
			temp += s[i];
	}

	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}

	return 0;
}
