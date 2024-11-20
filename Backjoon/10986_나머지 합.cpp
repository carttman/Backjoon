#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	long cnt = 0;

	vector<long> D(N, 0);
	vector<long> C(M, 0); // ���� �������� ������ �ε����� ī��Ʈ�ϴ� �迭

	cin >> D[0];
	for(int i=1; i<N; i++) // ���� �迭, �� �迭 �� ����
	{
		int K;
		cin >> K;
		D[i] = D[i-1] + K;
	}

	for(int i=0; i< N; i++)
	{
		int remainder; 
		remainder = D[i] % M; // �չ迭�� ������ �� ���

		if(remainder == 0) // ������ �������� ī��Ʈ ����
		{
			cnt++;
		}
		C[remainder]++; // �ش� ������ �� �ε����� ī��Ʈ ����
	}

	for(int i=0; i<M; i++)
	{
		if(C[i] > 1) // �ش� �ε����� ¦�� �ϳ��� �ִٸ�
		{
			cnt += C[i] * (C[i]-1)/2;
		}
	}
	cout << cnt;
	return 0;
}