#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (1)
	{
		int a, b, c;
		priority_queue<int,vector<int>, greater<>> pq;
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && a == 0)
			break;

		pq.push(a);
		pq.push(b);
		pq.push(c);

		int f, s, t;
		f = pq.top();
		pq.pop();
		s = pq.top();
		pq.pop();
		t = pq.top();
		pq.pop();

		if (f + s <= t)
		{
			cout << "Invalid\n";
		}
		else if (a == b && b == c)
		{
			cout << "Equilateral\n";
		}
		else if (a == b || b == c || a == c)
		{
			cout << "Isosceles\n";
		}
		else
		{
			cout << "Scalene\n";
		}
	}
	return 0;
}