#include <algorithm>
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

	for (int i=0; i<N; i++)
	{
		cin >>A[i];
	}

	sort(A.begin(), A.end()); // 오름차순으로 정렬

	int count = 0;

	for (int k = 0; k < N; k++)
	{
		int i = 0;
		int j = N-1;
		int select = A[k]; //현재 합이 되야할 수 선택

		while (i < j)
		{
			if (A[i] + A[j] == select) // 두 수의 합이 같다면
			{
				if (i != k && j != k) // 둘 중에 하나라도 k가 아닐때만.
				{
					count++;
					break;
				}
				else if (i == k) // k랑 같다면 i 이동
				{
					i++;
				}
				else if (j == k) // k랑 같다면 j 이동
				{
					j--;
				}
			}
			else if (A[i] + A[j] < select)
			{
				i++;
			}
			else
			{
				j--;
			}
		}
	}
	cout << count;
}