#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	deque<pair<int, int>> dq;

	for (int i = 1; i <= n; i++)
	{
		int k;
		cin >> k;
		dq.emplace_back(k, i);
	}

	while (!dq.empty())
	{
		auto nextTarget = dq.front();
		dq.pop_front();

		cout << nextTarget.second << " ";

		while (nextTarget.first && !dq.empty())
		{
			if (nextTarget.first > 0)
			{
				nextTarget.first--;

				if (!nextTarget.first)
				{
					nextTarget = dq.front();
					cout << dq.front().second << " ";
					dq.pop_front();
				}
				else
				{
					auto tmp = dq.front();

					dq.pop_front();
					dq.push_back(tmp);
				}

			}
			else
			{
				nextTarget.first++;

				if (!nextTarget.first)
				{
					nextTarget = dq.back();
					cout << dq.back().second << " ";
					dq.pop_back();
				}
				else
				{
					auto tmp = dq.back();

					dq.pop_back();
					dq.push_front(tmp);
				}
			}
		}
	}

	return 0;
}