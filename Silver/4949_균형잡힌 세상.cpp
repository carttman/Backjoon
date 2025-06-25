#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	// 균형맟추기
	// 모든 문자열에 소괄호 대괄호가 있다
	// ( 는 )랑만 짝을 이룬다.
	// [ 는 ] 랑만 짝을 이룬다
	// 오른쪽 괄호는 왼쪽 괄호가 존재
	// 괄호가 짝이 이뤄졌다면, 그 사이에 있는 문자열도 균형을 잡는다
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