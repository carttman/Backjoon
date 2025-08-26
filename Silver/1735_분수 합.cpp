#include <iostream>

using namespace std;

int gcd(int x, int y)
{
	if (y)
	{
		return gcd(y, x % y);
	}

	return x;

}

int main()
{
	int x1, y1, x2, y2;

	cin >> x1 >> y1 >> x2 >> y2;


	int child = (x1 * y2) + (x2 * y1);
	int parent = y1 * y2;

	cout << child / gcd(child, parent) << " " << parent / gcd(child ,parent);
	return 0;
}