#include <iostream>
#include <stack>

using namespace std;

int main()
{
	// PS => (, )만으로 구성되있는 문자열
	// VPS => PS 중에서 바르게 구성된 괄호 문자열
	// x가 VPS라면 (x)도 VPS이다
	// x,y가 VPS라면 xy 도 VPS이다

	int t;
	cin >> t;

	while (t--)
	{
		stack<char> myStack;
		string s;
		cin >> s;

		for (int i=0; i < s.size(); i++)
		{
			if (myStack.empty())
			{
				myStack.push(s[i]);
			}
			else
			{
				if (myStack.top() == '(' && s[i] == ')')
				{
					myStack.pop();
				}
				else
				{
					myStack.push(s[i]);
				}
			}
		}
		if (myStack.empty())
		{
			cout << "YES" << "\n";
		}
		else
		{
			cout << "NO" << "\n";
		}
	}
}