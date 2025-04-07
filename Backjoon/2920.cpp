#include <iostream>

using namespace std;

int main()
{
	string s = "";

	for (int i=0; i<8; i++)
	{
		int n;
		cin >> n;

		s.push_back(n + '0');

	}

	if (s == "12345678")
	{
		cout << "ascending";
	}
	else if (s == "87654321")
	{
		cout << "descending";
	}
	else
	{
		cout << "mixed";
	}
}