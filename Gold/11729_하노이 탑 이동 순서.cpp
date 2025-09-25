#include <iostream>

using namespace std;

void Recursion(int n, int start, int end, int bypass)
{
	if (n==1)
		cout << start << " " << end << '\n';
	else
	{
		Recursion(n-1, start, bypass, end);
		cout << start << " " << end << '\n';
		Recursion(n-1, bypass, end, start);
	}
}

int main()
{
	int n;
	cin >> n;

	cout << (1<<n) -1 << '\n';
	Recursion(n, 1, 3, 2);

	return 0;
}