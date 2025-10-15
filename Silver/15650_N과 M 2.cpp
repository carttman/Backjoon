#include <iostream>
#include <vector>

using namespace std;

int n, m;
bool Visited[8];
int answer[8];

vector<int> answer2;
void BackTracking(int size)
{
	if (answer2.size() == m)
	{
		for (const auto& i : answer2)
			cout << i << " ";

		cout << '\n';

		return;
	}

	for (int i = size; i <= n; i++)
	{
		answer2.push_back(i);
		BackTracking(i + 1);
		answer2.pop_back();
	}
}

int main()
{
	cin >> n >> m;

	BackTracking(1);

	return 0;
}