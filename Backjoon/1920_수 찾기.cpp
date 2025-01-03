#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> A(N, 0);

	for(int i=0; i<N; i++)
	{
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	int M;
	cin >> M;

	for(int i=0; i<M; i++)
	{
		bool find = false;
		int target;
		cin >> target;

		int start = 0;
		int end = A.size() - 1;

		while(start <= end) // 시작 인덱스와 끝 인덱스가 만날 때까지
		{
			int mid_idx = (start + end) / 2; //중간 인덱스
			int mid_value = A[mid_idx]; // 중간 값

			if(mid_value > target) // 중간 값이 선택 값보다 크면
			{
				end = mid_idx - 1; // 끝 인덱스 = 중간 인덱스 -1 => 중간 인덱스 바로 왼쪽인 인덱스
			}
			else if(mid_value < target) //중간 값이 선택 값보다 작으면  
			{
				start = mid_idx + 1; // 시작 인덱스 = 중간 인덱스 => 중간 인덱스 바로 오른쪽인 인덱스
			}
			else
			{
				find = true;
				break;
			}
		}

		if(find)
		{
			cout << 1 << "\n";
		}
		else
		{
			cout << 0 << "\n";
		}
	}

}