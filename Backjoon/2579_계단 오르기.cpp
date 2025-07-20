#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 계단은 한 번에 한, 두 개씩 오를 수 있다.
	// 연속된 세 개의 계단을 밟으면 안된다. 시작점은 제외
	// 마지막 계단은 무조건 밟는다


	//최댓값을 구하라

	// 다음 계단을 건널 때, 두 칸 이내로 더 큰 값의 계단을 고른다.
	// 연속계단 카운트가 3개 이상이라면 그 계단은 제외한다
	// 다음 계단이 마지막 계단이라면 무조건 간다.

	int N;
	cin >> N;

	vector<int> A(N+1, 0);
	int answer = 0;

	for (int i=1; i<=N; i++)
	{
		cin >> A[i];
	}

	int cnt = 0;
	for (int i=0; i < A.size(); i++)
	{


		// 다음 계단이 마지막 계단이라면 무조건 간다.
		if (i+1 >= A.size() - 1)
		{
			answer += A[A.size()-1];
			break;
		}

		// 연속계단 카운트가 2라면 한 칸 뒤에 있는 계단 오른다
		// 카운트 초기화 해주기
		if (cnt == 2)
		{
			answer += A[i+2];
			cnt = 0;
			break;
		}
			// 다음 계단을 건널 때, 두 칸 이내로 더 큰 값의 계단을 고른다.
			if (A[i+1] < A[i+2])
			{
				answer += A[i+2];
				i++;
			}
			else
			{
				answer += A[i+1];
				cnt++;
			}

	}
	cout << answer;
}