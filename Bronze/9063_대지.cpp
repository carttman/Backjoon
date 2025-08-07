#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int min_x(10000), min_y(10000), max_x(-10000), max_y(-10000);

	for (int i=0; i<n; i++)
	{
		int x, y;
		cin >> x >> y;

		min_x = min(min_x, x);
		max_x = max(max_x, x);

		min_y = min(min_y, y);
		max_y = max(max_y, y);
	}

	cout << (max_x - min_x) * (max_y - min_y);

	return 0;
}