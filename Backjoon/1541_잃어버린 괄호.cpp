#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<string> Split(string input, char delimiter);
int mySum(string a);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int answer = 0;
	string example;
	cin >> example;

	vector<string> str = Split(example, '-');

	for (int i=0; i<str.size(); i++)
	{
		int temp = mySum(str[i]);

		if (i == 0)
		{
			answer = answer + temp;
		}
		else
		{
			answer = answer - temp;
		}
	}

	cout << answer << "\n";
}

vector<string> Split(string input, char delimiter) // ���ڿ��� Ư�� �����ڷ� �߶� ���Ϳ� ����
{
	vector<string> result;
	stringstream mystream(input);
	string splitData;

	while (getline(mystream, splitData, delimiter))
	{
		result.push_back(splitData);
	}
	return result;
}

int mySum(string a) // ���� �׷��� ���ϱ� ���� ����
{
	int sum = 0;
	vector<string> temp = Split(a, '+');

	for (int i=0; i<temp.size(); i++)
	{
		sum += stoi(temp[i]);
	}
	return sum;
}

