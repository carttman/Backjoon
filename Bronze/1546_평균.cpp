#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	// 최댓값은 M
	// 모든 점수를 점수 / M * 100로 수정

	int N;
	cin >> N;

	vector<double> A(N, 0);

	for (int i=0; i<N; i++)
	{
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	double sum = 0;

	double M;
	M = A[N-1];

	for (int i=0; i<A.size(); i++)
	{
		A[i] = A[i] / M * 100;
		sum += A[i];
	}
	//cout << fixed;
	cout << sum / N;
}