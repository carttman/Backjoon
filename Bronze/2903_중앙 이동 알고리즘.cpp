#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int length = 2;
	int ans;

	for (int i=0; i<n; i++)
	{
		ans = (length * 2 - 1) * (length * 2 - 1);
		length = length * 2-1;
	}

	cout << ans;

	return 0;
}