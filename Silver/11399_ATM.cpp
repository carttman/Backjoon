#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> A(N, 0);

	for(int i=0; i< N; i++)
	{
		cin >> A[i];
	}

	for(int i=1; i<N; i++) // 0번째 값은 이미 범위에 포함되므로 스킵한다.
	{
		int pos = i; // 현재 위치 인덱스
		int pos_value = A[i]; // 현재 위치 시간값

		for(int j=i-1; j>=0; j--) // 뒤에서부터 순환
		{
			if(A[j] < A[i]) //다음값이 현재값보다 작다면
			{
				pos = j+1; //현재 인덱스 
				break;
			}
			if(j==0)
			{
				pos = 0;
			}
		}

		for(int j=i; j > pos; j--)
		{
			A[j] = A[j-1];
		}
		A[pos] = pos_value;
	}

	vector<int> S(N, 0);

	S[0] = A[0];

	for(int i=1; i<N; i++)
	{
		S[i] = S[i-1] + A[i];
	}

	int sum = 0;

	for(int i=0; i<N; i++)
	{
		sum = sum + S[i];
	}

	cout << sum;
}