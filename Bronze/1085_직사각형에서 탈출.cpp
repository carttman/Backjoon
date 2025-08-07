#include <iostream>

using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int curr_min = 1000;
	curr_min = min(curr_min, x);
	curr_min = min(curr_min, w - x);
	curr_min = min(curr_min, y);
	curr_min = min(curr_min, h-y);

	cout << curr_min;
	return 0;
}