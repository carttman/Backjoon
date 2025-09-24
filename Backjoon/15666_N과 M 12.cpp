#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
vector<int> A;
vector<int> Temp;

void BackTracking(int size)
{
	if (Temp.size() == M)
	{
		for (int n : Temp)
		{
			cout << n << " ";
		}

		cout << "\n";

		return;
	}

	int lastUsed = -1;

	for (int i = size; i < N; i++)
	{
		if (lastUsed != A[i])
		{

			Temp.push_back(A[i]);

			BackTracking(i);

			Temp.pop_back();

			lastUsed = A[i];
		}
		
	}

}

int main()
{
	cin >> N >> M;

	for (int i=0; i<N; i++)
	{
		int a;
		cin >> a;
		A.push_back(a);
	}

	sort(A.begin(), A.end());

	BackTracking(0);
}