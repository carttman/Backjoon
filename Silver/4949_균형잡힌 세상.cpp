#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	// �������߱�
	// ��� ���ڿ��� �Ұ�ȣ ���ȣ�� �ִ�
	// ( �� )���� ¦�� �̷��.
	// [ �� ] ���� ¦�� �̷��
	// ������ ��ȣ�� ���� ��ȣ�� ����
	// ��ȣ�� ¦�� �̷����ٸ�, �� ���̿� �ִ� ���ڿ��� ������ ��´�
	while (true)
	{
			
		string s;
		getline(cin, s);

		if (s == ".")
		{
			break;
		}

		stack<char> myStack;
		bool flag = 0;
		for (int i=0; i<s.size(); i++)
		{
			char c = s[i];

			if ((c == '(' ) || (c == '['))
			{
				myStack.push(c);
			}
			else if (c == ')')
			{
				if (!myStack.empty() && myStack.top() == '(')
				{
					myStack.pop();
				}
				else
				{
					flag = 1;
					break;
				}
			}
			else if (c == ']')
			{
				if (!myStack.empty() && myStack.top() == '[')
				{
					myStack.pop();
				}
				else
				{
					flag = 1;
					break;
				}
			}
		}

		if (flag == 0 && myStack.empty())
		{
			cout << "yes" << "\n";
		}
		else
		{
			cout << "no" << "\n";
		}
	}
}