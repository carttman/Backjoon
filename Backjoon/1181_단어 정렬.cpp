#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int N;

	vector<string> A(N);

	for(int i=0; i<N; i++)
	{
		cin >> A[i];
	}
}