#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	vector<int> month = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	vector<string> dotw = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

	int total = 0;
	total += y;

	for (int i = 0; i < x - 1; i++)
	{
		total += month[i];
	}

	cout << dotw[total % 7];
	return 0;
}