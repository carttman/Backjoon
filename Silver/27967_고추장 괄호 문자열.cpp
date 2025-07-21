#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	int open=0;

	for (int i=0; i<n; i++)
	{
		if (s[i] == '(')
		{
			open++;
		}
	}

	for (int i=0; i<s.size(); i++)
	{
		if (s[i] == 'G')
		{
			if (open < n/2)
			{
				s[i] = '(';
				open++;
			}
			else
			{
				s[i] = ')';
			}
		}
	}
	cout << s;
}