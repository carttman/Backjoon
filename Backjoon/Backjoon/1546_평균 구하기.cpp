#include <iostream>

using namespace std;

int main()
{
	//���� ���� (1000���� ����)
	int N = 0;
	// ����
	int A[1000];

	// ���� ���� ���� �ݺ� -> ���� ������ŭ ���� �Է�
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	
	long sum = 0; // ��
	long max = 0; // �ְ� ����

	// ���� �������� �ݺ�
	for (int i = 0; i < N; i++)
	{	
		if (A[i] > max) // ���� ������ �ְ� �������� ũ�ٸ�
		{
			max = A[i]; // �ְ� ������ �ֱ�
		}
		sum = sum + A[i]; // ���� �� �տ� �ֱ�
	}
	// ����� �� ���� * 100 / �ְ����� / ���� ����
	double result = sum * 100.0 / max / N;
	cout << result << "n";

//	return 0;
}