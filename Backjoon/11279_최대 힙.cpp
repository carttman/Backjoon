#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	cin >> N;
	priority_queue<int> pq;

	for (int i=0; i<N; i++)
	{
		int n;
		cin >> n;
		if (pq.empty() && n == 0)
		{
			cout << 0 << "\n";
		}
		else if (n == 0)
		{
			cout << pq.top() << "\n";
			pq.pop();
		}
		else if (n != 0)
		{
			pq.push(n);
		}
	}
}