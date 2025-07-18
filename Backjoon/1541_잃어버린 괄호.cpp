#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<string> splitComma(string str, char Delimiter)
{
	istringstream iss(str);
	string buffer;

	vector<string> result;

	while (getline(iss, buffer, Delimiter))
	{
		result.push_back(buffer);
	}

	return result;
}

int main()
{
	string s;
	cin >> s;

	vector<string> numberStrings;
	numberStrings = splitComma(s, '-');

	vector<string> first;
	first = splitComma(numberStrings[0], '+');

	int sum1 = 0;

	for (string tmp : first)
	{
		int n = stoi(tmp);
		sum1 += n;
	}

	int sum2 = 0;

	if (numberStrings.size() > 1)
	{
		for (int i=1; i	< numberStrings.size(); i++)
		{
			vector<string> second;

			second = splitComma(numberStrings[i], '+');

			for (string tmp : second)
			{
				int n = stoi(tmp);
				sum2 += n;
			}
		}
	}

	cout << sum1 - sum2;
}