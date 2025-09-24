#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int notcute = 0;
	int cute = 0;

	while (n--)
	{
		int m;
		cin >> m;

		if (!m)
			notcute++;
		else
			cute++;
	}

	if (cute < notcute)
		cout << "Junhee is not cute!";
	else
		cout << "Junhee is cute!";

	return 0;
}