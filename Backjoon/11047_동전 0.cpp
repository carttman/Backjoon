#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, K;

	cin >> N >> K;

	vector<int> A(N, 0);

	for (int i=0; i<N; i++)
	{
		cin >> A[i];
	}

	int cnt = 0;

	for (int i=N-1; i>= 0; i--) // ������������ Ž��
	{
		if (A[i] <= K) // ���� �ݾ��� K�ݾ׺��� �۰ų� ���ٸ�
		{
			cnt += (K / A[i]); // ���� �ݾ��� ���� ������ ī�����Ѵ�.
			K = K % A[i]; // K���� ���� �ݾ��� ���� ���� �ݾ����� ������Ʈ�Ѵ�. 
		}
	}
	cout << cnt;
}