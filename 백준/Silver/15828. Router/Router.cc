#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	queue<int> q;

	while (1)
	{
		int num;
		cin >> num;

		if (num == -1)
			break;

		if (num == 0)
			q.pop();
		else if (n > q.size())
			q.push(num);

	}

	if (q.empty())
		cout << "empty";
	else
	{
		while (!q.empty())
		{
			cout << q.front() << ' ';
			q.pop();
		}

	}
	return 0;
}