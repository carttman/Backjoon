#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> A(N, 0);

	for (int i=0; i< N; i++)
	{
		cin >> A[i];
	}

	for (int i=0; i< N-1; i++)
	{
		for (int j=0; j<N-1-i; j++)
		{
			if (A[j] > A[j+1]) //현재 값이 오른쪽 값보다 크면 swap
			{
				int temp = A[j]; //현재 값 저장
				A[j] = A[j+1]; //현재 값 오른쪽 값으로 변경
				A[j+1] = temp; // 오른쪽 값을 현재 값으로 변경
			}
		}
	}

	for (int i=0; i<N; i++)
	{
		cout << A[i] << '\n';
	}
}