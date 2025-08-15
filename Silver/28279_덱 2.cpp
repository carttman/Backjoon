#include <deque>
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	deque<int> dq;

	while (n--)
	{
		int i;
		cin >> i;

		if (i == 1)
		{
			int k;
			cin >> k;
			dq.push_front(k);
		}
		else if (i == 2)
		{
			int k;
			cin >> k;
			dq.push_back(k);
		}
		else if (i == 3)
		{
			if (dq.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (i == 4)
		{
			if (dq.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
		else if (i == 5)
		{
			cout << dq.size() << "\n";
		}
		else if (i == 6)
		{
			if (dq.empty())
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else if (i == 7)
		{
			if (dq.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << dq.front() << "\n";
			}
		}
		else
		{
			if (dq.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << dq.back() << "\n";
			}
		}
	}

	return 0;
}