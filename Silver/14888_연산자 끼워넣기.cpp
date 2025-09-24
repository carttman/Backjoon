#include <iostream>
#include <vector>

using namespace std;
vector<int> nums;
int n;
int mymin = 1000000001;
int mymax = -1000000001;
vector<int> operators(4);

void BackTracking(int result, int idx)
{
	if (idx == n)
	{
		if (result > mymax)
			mymax = result;
		if (result < mymin)
			mymin = result;

		return;
	}

	for (int i = 0; i < 4; i++)
	{
		if (operators[i] > 0)
		{
			operators[i]--;

			if (!i)
				BackTracking(result + nums[idx], idx + 1);
			else if (i == 1)
				BackTracking(result - nums[idx], idx + 1);
			else if (i == 2)
				BackTracking(result * nums[idx], idx + 1);
			else
				BackTracking(result / nums[idx], idx + 1);

			operators[i]++;
		}
	}
}

int main()
{
	cin >> n;

	nums.resize(n);

	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	for (int i = 0; i < 4; i++)
	{
		cin >> operators[i];
	}

	BackTracking(nums[0], 1);

	cout << mymax << '\n' << mymin;
	return 0;
}