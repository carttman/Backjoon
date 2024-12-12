#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<pair<int, int>> A(N);

	for(int i=0; i<N; i++)
	{
		cin >> A[i].first; // 숫자 저장
		A[i].second = i; // 해당 인덱스 저장
	}

	sort(A.begin(), A.end()); // 오름차순 정렬

	int Max = 0;

	for(int i=0; i< N; i++)
	{
		if(Max < A[i].second - i) //숫자의 정렬 전 index - 정렬 후 index 계산값의 최댓값 찾고 저장한다.
		{
			Max = A[i].second - i;
		}
	}


	cout << Max + 1;
}