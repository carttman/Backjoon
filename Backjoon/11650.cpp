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

	// x좌표를 정렬한다
	// x좌표의 크기가 같다면 y좌표 비교한다
}