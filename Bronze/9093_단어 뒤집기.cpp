#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore();

	while (t--)
	{
		string s;
		getline(cin, s);

		s += ' ';

		stack<char> myStack;

		for (const auto& i : s)
		{
			if (i == ' ')
			{
				while (!myStack.empty())
				{
 					cout << myStack.top();
					myStack.pop();
				}
				cout << i;
			}
			else
			{
				myStack.push(i);
			}
		}
	}
	return 0;
}