#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> A(N, 0);

	for(int i=0; i< N; i++)
	{
		cin >> A[i];
	}

	for(int i=1; i<N; i++) // 0��° ���� �̹� ������ ���ԵǹǷ� ��ŵ�Ѵ�.
	{
		int pos = i; // ���� ��ġ �ε���
		int pos_value = A[i]; // ���� ��ġ �ð���

		for(int j=i-1; j>=0; j--) // �ڿ������� ��ȯ
		{
			if(A[j] < A[i]) //�������� ���簪���� �۴ٸ�
			{
				pos = j+1; //���� �ε��� 
				break;
			}
			if(j==0)
			{
				pos = 0;
			}
		}

		for(int j=i; j > pos; j--)
		{
			A[j] = A[j-1];
		}
		A[pos] = pos_value;
	}

	vector<int> S(N, 0);

	S[0] = A[0];

	for(int i=1; i<N; i++)
	{
		S[i] = S[i-1] + A[i];
	}

	int sum = 0;

	for(int i=0; i<N; i++)
	{
		sum = sum + S[i];
	}

	cout << sum;
}