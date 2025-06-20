#include <iostream>

using namespace std;

int main()
{
	string str;
	int sum = 0;

	cin >> str;

	int location = str.find('*');

	for (int i=0; i<13; i++)
	{
		sum = 0;
		str[location] = i + '0';

		for (int j=0; j<13; j++)
		{
			if (j % 2 == 1) 
			{
				sum += (str[j] - '0') * 3;
					continue;
			}
			sum += (str[j] - '0');
		}

		if (sum % 10 == 0)
		{
			cout << str[location];
			return 0;
		}
	}
}