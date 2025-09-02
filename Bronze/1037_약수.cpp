#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	vector<int> numbers(t);

	for (int i=0; i<t; i++)
	{
		cin >> numbers[i];
	}

	sort(numbers.begin(), numbers.end());

	cout << numbers.front() * numbers.back();

	return 0;
}