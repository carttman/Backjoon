#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;

	int temp = t;
	temp %= 300;
	temp %= 60;
	temp %= 10;

	if (temp)
		cout << -1;
	else
	{
		cout << t / 300 << ' ';
		t %= 300;
		cout << t / 60 << ' ';
		t %= 60;
		cout << t / 10;
		t %= 10;
	}
	return 0;
}