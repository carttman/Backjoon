#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> temp;

void BackTracking(int size)
{
	if (temp.size() == M)
	{
		for (int n : temp)
		{
			cout << n << " ";
		}

		cout << "\n";

		return;
	}

	for (int i=size; i<=N; i++)
	{
		temp.push_back(i);
		BackTracking(i);
		temp.pop_back();
	}
}

int main()
{
	cin >> N >> M;

	BackTracking(1);
}