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
	if(End - Start < 1) //  서로 붙어있다면
	{
		return;
	}

	int Middle = Start + (End - Start) / 2; // 중간 인덱스

	MergeSort(Start, Middle); // 반 반 재귀로 정렬 시작
	MergeSort(Middle + 1, End);

	for(int i=Start; i <= End; i++) //임시 배열에 값 저장
	{
		tmp[i] = A[i];
	}


	int k = Start; // 현재 인덱스
	int idx1 = Start; // 투 포인터 인덱스 정의
	int idx2 = Middle + 1;

	while(idx1 <= Middle && idx2 <= End) // 합병
	{
		if(tmp[idx1] > tmp[idx2]) // 왼쪽이 더 크면
		{
			A[k] = tmp[idx2]; // A에 오른쪽 값 저장
			k++; // 다음 배열 인덱스로 이동
			idx2++; //오른쪽 인덱스 이동
		}
		else
		{
			A[k] = tmp[idx1];
			k++;
			idx1++;
		}
	}

	while(idx1 <= Middle) // 왼쪽 집합 순회
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
