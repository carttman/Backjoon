#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	queue<int> myQueue;

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string tmp = "";
		int k = 0;

		cin >> tmp;
		if (tmp == "push")
		{
			cin >> k;
			myQueue.push(k);
		}
		else if (tmp == "pop")
		{
			if (!myQueue.empty())
			{
				int tmp = myQueue.front();
				cout << tmp << '\n';

				myQueue.pop();

			}
			else
			{
				cout << -1 << '\n';
			}
		}
		else if (tmp == "size")
		{
			cout << myQueue.size() << '\n';
		}
		else if (tmp == "empty")
		{
			if (myQueue.empty())
			{
				cout << 1 << '\n';
			}
			else
			{
				cout << 0 << '\n';
			}
		}
		else if (tmp == "front")
		{
			if (myQueue.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << myQueue.front() << '\n';
			}
		}
		else if (tmp == "back")
		{
			if (myQueue.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << myQueue.back() << '\n';
			}
		}
	}
}