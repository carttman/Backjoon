#include <iostream>

using namespace std;

int CheckArr[4]; //��й�ȣ �迭
int MyArr[4]; //���� ��й�ȣ ���� �迭
int CheckSecret = 0; // ��й�ȣ �����ƴ��� Ȯ�� ����

void Add(char c); // ���� ���� ���ڸ� MyArr�� ������Ʈ �� CheckSecret�� ����
void Remove(char c); // ���ŵǴ� ���ڸ� MyArr ������Ʈ �� CheckSecret�� ���� 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int Count = 0;

	int S, P;
	cin >> S >> P;

	string A;
	cin >> A;

	for (int i=0; i<4; i++) // ��й�ȣ �迭 ä���
	{
		cin >> CheckArr[i];
		if (CheckArr[i] == 0) 
		{
			CheckSecret++; // 0�̸� �ش� ��й�ȣ�� üũ�Ȱų� ���������̹Ƿ� ����.
		}
	}

	for (int i=0; i<P; i++) //�� ó�� ������ �������� Ž�� ����
	{
		Add(A[i]);
	}

	if (CheckSecret == 4) // ���� ��� �����ߴٸ� ī��Ʈ ����
	{
		Count++;
	}

	for (int i=P; i<S; i++)  // ������ Ž��
	{
		int j = i - P;
		Add(A[i]); //�ű� �� �߰�
		Remove(A[j]); // ���� ����� �� ����
		if (CheckSecret == 4)
		{
			Count++;
		}
	}
	cout << Count;
}

void Add(char c)
{
	switch (c)
	{
	case'A':
		MyArr[0]++;
		if (MyArr[0] == CheckArr[0])  //���� ���� �迭 A���� ��й�ȣ �迭�� ���� ���ٸ� ����
		{
			CheckSecret++; 
		}
			break;
	case 'C':
		MyArr[1]++;
		if (MyArr[1] == CheckArr[1])
		{
			CheckSecret++;
		}
			break;
	case 'G':
		MyArr[2]++;
		if (MyArr[2] == CheckArr[2])
		{
			CheckSecret++;
		}
			break;
	case 'T':
		MyArr[3]++;
		if (MyArr[3] == CheckArr[3])
		{
			CheckSecret++;
		}
			break;
	}
}

void Remove(char c)
{
	switch (c)
	{
	case'A':
		if (MyArr[0] == CheckArr[0]) //���� ���� �迭 A���� ��й�ȣ �迭�� ���� ���ٸ� ����
		{
			CheckSecret--;
		}
			MyArr[0]--;
			break;
	case'C':
		if (MyArr[1] == CheckArr[1])
		{
			CheckSecret--;
		}
			MyArr[1]--;
			break;
	case'G':
		if (MyArr[2] == CheckArr[2])
		{
			CheckSecret--;
		}
			MyArr[2]--;
			break;
	case'T':
		if (MyArr[3] == CheckArr[3])
		{
			CheckSecret--;
		}
			MyArr[3]--;
			break;
	}
}