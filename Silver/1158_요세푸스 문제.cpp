#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	queue<int> q;

	for (int i = 1; i <= n; i++)
		q.push(i);

	cout << "<";

	while (!q.empty())
	{
		for (int i = 0; i < k - 1; i++)
		{
			int temp = q.front();
			q.pop();
			q.push(temp);
		}


		cout << q.front();

		if (q.size() > 1)
			cout << ", ";

		q.pop();
	}

	cout << ">";
	return 0;
}