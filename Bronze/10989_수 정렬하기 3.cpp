#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int A[10001] = {0};
	int number = 0;

	for(int i=1; i <= N; i++) // number �ε����� �� ������Ų��.
	{
		cin >> number;
		A[number]++;
	}

	for(int i=0; i<= 10000; i++) // �迭�� ����� �ε��� ���� ��½�Ų��.
	{
		if(A[i] != 0)
		{
			for(int j=0; j < A[i]; j++)
			{
				cout << i << "\n";
			}
		}
	}

}