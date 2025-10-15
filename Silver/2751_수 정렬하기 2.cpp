#include <iostream>
#include <vector>

using namespace std;


void MergeSort(int Start, int End);

vector<int> A;
vector<int> tmp;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	A = vector<int>(N+1, 0);
	tmp = vector<int>(N+1, 0);


	for(int i=1; i<= N; i++)
	{
		cin >> A[i];
	}

	MergeSort(1, N);

	for(int i=1; i <= N; i++)
	{
		cout << A[i] << "\n";
	}
}

void MergeSort(int Start, int End)
{
	if(End - Start < 1) //  ���� �پ��ִٸ�
	{
		return;
	}

	int Middle = Start + (End - Start) / 2; // �߰� �ε���

	MergeSort(Start, Middle); // �� �� ��ͷ� ���� ����
	MergeSort(Middle + 1, End);

	for(int i=Start; i <= End; i++) //�ӽ� �迭�� �� ����
	{
		tmp[i] = A[i];
	}


	int k = Start; // ���� �ε���
	int idx1 = Start; // �� ������ �ε��� ����
	int idx2 = Middle + 1;

	while(idx1 <= Middle && idx2 <= End) // �պ�
	{
		if(tmp[idx1] > tmp[idx2]) // ������ �� ũ��
		{
			A[k] = tmp[idx2]; // A�� ������ �� ����
			k++; // ���� �迭 �ε����� �̵�
			idx2++; //������ �ε��� �̵�
		}
		else
		{
			A[k] = tmp[idx1];
			k++;
			idx1++;
		}
	}

	while(idx1 <= Middle) // ���� ���� ��ȸ
	{
		A[k] = tmp[idx1];
		k++;
		idx1++;
	}

	while(idx2 <= End)
	{
		A[k] = tmp[idx2];
		k++;
		idx2++;
	}
}
