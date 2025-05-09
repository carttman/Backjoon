#include <iostream>
#include <vector>

using namespace std;

vector<int> A;
int N, M;

void BackTracking(int start)
{
	if (A.size() == M)
	{
		for (int n : A)
		{
			cout << n << " ";
		}
		cout << "\n";

		return;
	}

	for (int i = start; i<= N; i++)
	{
		A.push_back(i);
		BackTracking(i + 1);
		A.pop_back();
	}

}

int main()
{

	cin >> N >> M;

	BackTracking(1);
}