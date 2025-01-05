#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	int sum = 0;
	vector<int> A(5, 0);

	for(int i=0; i<5; i++)
	{
		cin >> A[i];

		A[i] = A[i] * A[i];

		sum += A[i];
	}

	sum = sum % 10;

	cout << sum;
}