#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	int n;
	cin >> n;

	queue<int> q;

	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;

		q.emplace(number);
	}

	int currNum = 1;

	stack<int> stk;

	while (!q.empty())
	{
		if (currNum == q.front())
		{
			currNum++;
			q.pop();
		}
		else
		{
			stk.push(q.front());
			q.pop();
		}

		while (!stk.empty())
		{
			if (stk.top() == currNum)
			{
				currNum++;
				stk.pop();
			}
			else
				break;
		}
	}

	string s = "Nice";

	if (!stk.empty())
	{
		s = "Sad";
	}

	cout << s;

	return 0;
}