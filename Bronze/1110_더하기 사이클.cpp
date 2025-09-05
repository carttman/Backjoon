#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int temp = n;
	int cnt = 0;

	while (1)
	{
		int left = (temp % 10) * 10;
		int right = ((temp / 10) + (temp % 10)) % 10;

		temp = left + right;

		cnt++;

		if (temp == n)
			break;
	}

	cout << cnt;

	return 0;
}