#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, k;
	cin >> n >> k;

	queue<int> q;

	for (int i=1; i<=n; i++)
		q.push(i);

	while (q.size() > k)
	{
		int tmp = q.front();

		for (int i=0; i<k; i++)
			q.pop();

		q.push(tmp);
	}

	cout << q.front();
	return 0;
}