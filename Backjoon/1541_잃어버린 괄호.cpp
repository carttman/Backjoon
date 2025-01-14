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

vector<string> Split(string input, char delimiter) // 문자열을 특정 구분자로 잘라 벡터에 저장
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

int mySum(string a) // 나뉜 그룹의 더하기 연산 수행
{
	int sum = 0;
	vector<string> temp = Split(a, '+');

	for (int i=0; i<temp.size(); i++)
	{
		sum += stoi(temp[i]);
	}
	return sum;
}

