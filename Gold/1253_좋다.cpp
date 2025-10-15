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

	sort(A.begin(), A.end()); // ������������ ����

	int count = 0;

	for (int k = 0; k < N; k++)
	{
		int i = 0;
		int j = N-1;
		int select = A[k]; //���� ���� �Ǿ��� �� ����

		while (i < j)
		{
			if (A[i] + A[j] == select) // �� ���� ���� ���ٸ�
			{
				if (i != k && j != k) // �� �߿� �ϳ��� k�� �ƴҶ���.
				{
					count++;
					break;
				}
				else if (i == k) // k�� ���ٸ� i �̵�
				{
					i++;
				}
				else if (j == k) // k�� ���ٸ� j �̵�
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