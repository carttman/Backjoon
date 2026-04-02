#include <iostream>
#include <string>
using namespace std;

int main()
{
	int nums[10] = {};

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
		nums[s[i] - '0']++;

	int tmp = nums[6] + nums[9] + 1;
	nums[6] = tmp / 2;
	nums[9] = tmp / 2;

	int ans = 0;
	for (int i = 0; i < 10; i++)
		ans = max(ans, nums[i]);

	cout << ans;
	return 0;
}
