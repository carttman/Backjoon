#include <iostream>
#include <vector>

using namespace std;


void QuickSort(vector<int> &A, int Start, int End, int K);
int Partition(vector<int> &A, int Start, int End);
void Swap(vector<int> &A, int i, int j);


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;

	vector<int> A(N, 0);


	for(int i=0; i<N; i++)
	{
		cin >> A[i];
	}

	QuickSort(A, 0, N - 1, K - 1); 

	cout << A[K-1];
}

void QuickSort(vector<int> &A, int Start, int End, int K)
{
	int pivot = Partition(A, Start, End);

	if(pivot == K) // K�� �������ٸ� ����
	{
		return;	
	}
	else if(K < pivot) // K�� pivot ���� �۴ٸ� 
	{
		QuickSort(A, Start, pivot - 1, K); // ���� ���� ���� ����
	}
	else
	{
		QuickSort(A, pivot + 1, End, K); // ������ ���� ���� ����
	}

}

int Partition(vector<int> &A, int Start, int End) // pivot �����ִ� �Լ�
{
	if(Start + 1 == End) //start, end ��ġ�� �پ��ִٸ�
	{
		if(A[Start] > A[End]) // Ȥ�� start���� �� ũ�ٸ� swap
		{
			Swap(A, Start, End);
		}
		return End;
	}

	int M = (Start + End) / 2;
	Swap(A, Start, M);

	int pivot = A[Start];
	int i = Start + 1, j = End;

	while(i <= j)
	{
		while(j >= Start+1 && pivot < A[j]) // pivot���� ���� ���� ���� ������ j �̵�
		{
			j--;
		}
		while(i <= End && pivot > A[i]) // pivot���� ū ���� ���� ������ i �̵�
		{
			i++;
		}
		if(i < j)
		{
			Swap(A, i++, j--);
		}
		else
		{
			break;
		}
	}

	A[Start] = A[j];
	A[j] = pivot;
	return j;
}

void Swap(vector<int>& A, int i, int j)
{
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}
