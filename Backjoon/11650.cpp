#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;

	cin >> N;

	vector<pair<int, int>> A(N, make_pair(0, 0));

	for (int i = 0; i < N; i++)
	{
		cin >> A[i].first >> A[i].second;

	}
		sort(A.begin(), A.end());

	for (int i = 0; i < N; i++)
	{
		cout << A[i].first  << " " << A[i].second << "\n";
	}

	// x��ǥ�� �����Ѵ�
	// x��ǥ�� ũ�Ⱑ ���ٸ� y��ǥ ���Ѵ�
}