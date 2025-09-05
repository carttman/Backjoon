#include <iostream>

using namespace std;

int SelfNumber(int n)
{
	int temp = n;

	while (n != 0)
	{
		temp = temp + (n % 10);
		n = n / 10;
	}

	return temp;
}

int main()
{
	const int mymax = 10001;
	bool check[mymax] = {false, };
	int n = 0;

	for (int i = 1; i < mymax; i++)
	{
		n = SelfNumber(i);

		if (n < mymax)
			check[n] = true;
	}

	for (int i=1; i<mymax; i++)
	{
		if (!check[i])
			cout << i << '\n';
	}

	return 0;
}