#include <iostream>

using namespace std;

int main()
{
	int N;
	int size[6];
	int T, P;

	// ������ ��
	cin >> N;

	// Ƽ���� ����� ��û�� ��
	for (int i=0; i<6; i++)
	{
		cin >> size[i];
	}

	// Ƽ����, �� ���� ��
	cin >> T >> P;

	int min = 0;

	for (int i=0; i< 6; i++)
	{
		//�� Ƽ������ ��û�� �� % ������ ��
		if (size[i] % T == 0)
		{
			min += size[i] / T;
		}
		else
		{
			min += size[i] / T + 1;
		}
	}
	
	cout << min << "\n";
	//P�ڷ羿 �ִ� �� ����, �� �ڷ羿 � �ֹ�
	cout << N / P << " " << N % P;
}