#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	stack<int> stk;

	for (int i=0; i<n; i++)
	{
		int a;
		cin >> a;

		if (a == 1)
		{
			int b;
			cin >> b;

			stk.emplace(b);
		}
		else if (a == 2)
		{
			if (!stk.empty())
			{
				cout << stk.top() << "\n";
				stk.pop();
			}
			else
			{
				cout << -1 << "\n";
			}
		}
		else if (a == 3)
		{
			cout << stk.size() << "\n";
		}
		else if (a == 4)
		{
			if (stk.empty())
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else
		{
			if (!stk.empty())
			{
				cout << stk.top() << "\n";
			}
			else
			{
				cout << -1 << "\n";
			}
		}
	}

	return 0;
}