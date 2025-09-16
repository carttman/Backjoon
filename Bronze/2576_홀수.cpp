#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> arr;

	for (int i=0; i<7; i++)
	{
		int n;
		cin >> n;

		if (n % 2 !=0)
			arr.emplace_back(n);
	}

	sort(arr.begin(), arr.end());

	int sum = 0;
	for (const auto& i : arr)
		sum += i;

	if (!arr.empty())
	{
		cout << sum << '\n' << arr[0];
	}
	else
	{
		cout << -1;
	}

	return 0;
}