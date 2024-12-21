#include <iostream>
#include <vector>

using namespace std;

void MergeSort(int Start, int End);
vector<int> A;
vector<int> tmp;
static long Result = 0;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	int N;
	cin >> N;

	A = vector<int>(N + 1, 0);
	tmp = vector<int>(N+1, 0);

	for(int i=1; i<=N; i++)
	{
		cin >> A[i];
	}

	MergeSort(1, N);

	cout << Result << "\n";
}

void MergeSort(int Start, int End)
{
	if(End - Start < 1)
	{
		return;
	}

	int Middle = Start + (End - Start) / 2;

	MergeSort(Start, Middle);
	MergeSort(Middle + 1, End);

	for(int i=Start; i<= End; i++)
	{
		tmp[i] = A[i];
	}

	int k = Start;
	int idx1 = Start;
	int idx2 = Middle + 1;

	while(idx1 <= Middle && idx2 <= End)
	{
		if(tmp[idx1] > tmp[idx2])
		{
			A[k] = tmp[idx2];
			Result = Result + idx2 - k;
			k++;
			idx2++;
		}
		else
		{
			A[k] = tmp[idx1];
			k++;
			idx1++;
		}
	}

	while(idx1 <= Middle)
	{
		A[k] = tmp[idx1];
		k++;
		idx1++;
	}

	while (idx2 <= End)
	{
		A[k] = tmp[idx2];
		k++;
		idx2++;
	}
}
