#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

	int n;

	cin >> n;

	vector<int> A(n);

	for (int i=0; i<n; i++)
	{
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	int high = A[n-1];
	int sum = 0;

	for (int i=0; i<A.size(); i++)
	{
		sum += A[i] / high * 100;
	}
	// (40 / 80) * 100
	int result = sum / n;
	cout << result;
}