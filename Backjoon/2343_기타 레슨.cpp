#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	vector<int> A(N);
	int start = 0;
	int end = 0;

	for(int i=0; i<N; i++)
	{
		cin >> A[i];

		if(start < A[i]) 
		{
			start = A[i]; // 레슨 최댓값을 시작 인덱스로 저장
		}

		end = end + A[i]; // 모든 레슨의 값을 종료 인덱스로 저장
	}

	while(start <= end)
	{
		int middle = (start + end) / 2;
		int sum = 0; // 레슨 합
		int count = 0; //현재 사용한 블루레이 개수

		for(int i=0; i<N; i++) // middle값으로 모든 레슨을 저장할 수 있는지 확인
		{
			if(sum + A[i] > middle) 
			{
				count++;
				sum = 0;
			}

			sum = sum + A[i]; //sum에 현재 레슨 시간 값 더하기
		}

		if(sum != 0) // sum이 0이 아니면 마지막 블루레이가 필요하므로 count 증가
		{
			count++;
		}

		if(count > M) // 현재 중간 인덱스 값으로 모든 레슨 저장 불가
		{
			start = middle + 1;
		}
		else
		{
			end = middle - 1;
		}
	}

	cout << start << "\n";
}