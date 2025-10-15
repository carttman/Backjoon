#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	priority_queue<int, vector<int>, greater<int>> pq;
	int data;

	for (int i=0; i<N; i++)
	{
		cin >> data;
		pq.push(data);
	}

	int d1 = 0;
	int d2 = 0;
	int sum = 0;

	while (pq.size() != 1)
	{
		d1 = pq.top();
		pq.pop();

		d2 = pq.top();
		pq.pop();

		sum += d1 + d2;

		pq.push(d1 + d2);
	}

	cout << sum << '\n';
}