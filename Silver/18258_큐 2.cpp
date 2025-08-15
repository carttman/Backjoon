#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;

	queue<int> q;

	while (n--)
	{
		string s;
		cin >> s;

		if (s == "push")
		{
			int n;
			cin >> n;
			q.emplace(n);
		}
		else if (s == "pop")
		{
			if (q.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (s == "size")
		{
			cout << q.size() << "\n";
		}
		else if (s == "empty")
		{
			if (q.empty())
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else if (s == "front")
		{
			if (!q.empty())
			{
				cout << q.front() << "\n";
			}
			else
			{
				cout << -1 << "\n";
			}
		}
		else
		{
			if (!q.empty())
			{
				cout << q.back() << "\n";
			}
			else
			{
				cout << -1 << "\n";
			}
		}
	}
}