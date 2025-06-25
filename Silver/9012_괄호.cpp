#include <iostream>
#include <stack>

using namespace std;

int main()
{
	// PS => (, )������ �������ִ� ���ڿ�
	// VPS => PS �߿��� �ٸ��� ������ ��ȣ ���ڿ�
	// x�� VPS��� (x)�� VPS�̴�
	// x,y�� VPS��� xy �� VPS�̴�

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