#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<int> splitCommaToInt(const string& s, char delimiter)
{
	string temp;

	for (int i=1; i<s.size()-1; i++)
	{
		temp.push_back(s[i]);
	}

	istringstream iss(temp);
	string buffer;

	vector<int> arr;
	
	while (getline(iss, buffer, delimiter))
	{
		int n;
		n = stoi(buffer);
		arr.push_back(n);
	}

	return arr;
}

vector<int> Reverse(vector<int>& arr)
{
	vector<int> temp;

	for (int i=arr.size()-1; i = 0; i--)
	{
		temp.push_back(arr[i]);
	}

	return temp;
}


int main()
{
	int t;
	cin >> t;

	for (int i=0; i<t; i++)
	{
		string p;
		cin >> p;

		int n;
		cin >> n;

		vector<int> numbers(n);

		string arrString;
		cin >> arrString;

		numbers = splitCommaToInt(arrString, ',');

		if (numbers.empty())
		{
			cout << "error" << "\n";
			continue;
		}

		for (int j=0; j<p.size(); j++)
		{
			if (p[i] == 'R')
			{
				numbers = Reverse(numbers);
			}
			else
			{
				
			}
		}

		for (int j=0; j<numbers.size(); j++)
		{
			cout << numbers[i] << " ";
		}
	}
}