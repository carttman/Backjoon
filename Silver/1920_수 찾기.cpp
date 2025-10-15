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

	vector<int> A(N, 0);

	for(int i=0; i<N; i++)
	{
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	int M;
	cin >> M;

	for(int i=0; i<M; i++)
	{
		bool find = false;
		int target;
		cin >> target;

		int start = 0;
		int end = A.size() - 1;

		while(start <= end) // ���� �ε����� �� �ε����� ���� ������
		{
			int mid_idx = (start + end) / 2; //�߰� �ε���
			int mid_value = A[mid_idx]; // �߰� ��

			if(mid_value > target) // �߰� ���� ���� ������ ũ��
			{
				end = mid_idx - 1; // �� �ε��� = �߰� �ε��� -1 => �߰� �ε��� �ٷ� ������ �ε���
			}
			else if(mid_value < target) //�߰� ���� ���� ������ ������  
			{
				start = mid_idx + 1; // ���� �ε��� = �߰� �ε��� => �߰� �ε��� �ٷ� �������� �ε���
			}
			else
			{
				find = true;
				break;
			}
		}

		if(find)
		{
			cout << 1 << "\n";
		}
		else
		{
			cout << 0 << "\n";
		}
	}

}