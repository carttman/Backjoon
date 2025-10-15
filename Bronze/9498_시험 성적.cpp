#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	if(N <= 100 && N >= 90)
	{
		cout << "A";
	}
	else if (N <= 89 && N >= 80)
	{
		cout << "B";
	}
	else if (N <= 79 && N >= 70)
	{
		cout << "C";
	}
	else if(N <= 69 && N >= 60)
	{
		cout << "D";
	}
	else
	{
		cout << "F";
	}
}