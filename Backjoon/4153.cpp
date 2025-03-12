#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);


	while (1)
	{
		int a, b, c;
		int tmp = 0;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
		{
			return 0;
		}

		if (a > b)
		{
			tmp = b;
			b = a;
			a = tmp;
		}

		if (b > c)
		{
			tmp = b;
			b = c;
			c = tmp;
		}

		if (c*c == a*a + b*b)
		{
			cout << "right" << "\n";
		}
		else
		{
			cout << "wrong" << "\n";
		}
	}

}