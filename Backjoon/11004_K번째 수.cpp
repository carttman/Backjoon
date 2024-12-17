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

	if(pivot == K) // K와 같아졌다면 종료
	{
		return;	
	}
	else if(K < pivot) // K가 pivot 보다 작다면 
	{
		QuickSort(A, Start, pivot - 1, K); // 왼쪽 집합 정렬 시작
	}
	else
	{
		QuickSort(A, pivot + 1, End, K); // 오른쪽 집합 정렬 시작
	}

}

int Partition(vector<int> &A, int Start, int End) // pivot 정해주는 함수
{
	if(Start + 1 == End) //start, end 위치가 붙어있다면
	{
		if(A[Start] > A[End]) // 혹시 start값이 더 크다면 swap
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
		while(j >= Start+1 && pivot < A[j]) // pivot보다 작은 수가 나올 때까지 j 이동
		{
			j--;
		}
		while(i <= End && pivot > A[i]) // pivot보다 큰 수가 나올 때까지 i 이동
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
