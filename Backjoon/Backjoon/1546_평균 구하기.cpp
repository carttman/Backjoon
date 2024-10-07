#include <iostream>

using namespace std;

int main()
{
	//과목 개수 (1000보다 작음)
	int N = 0;
	// 성적
	int A[1000];

	// 과목 개수 까지 반복 -> 과목 개수만큼 점수 입력
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	
	long sum = 0; // 합
	long max = 0; // 최고 점수

	// 과목 개수까지 반복
	for (int i = 0; i < N; i++)
	{	
		if (A[i] > max) // 만약 점수가 최고 점수보다 크다면
		{
			max = A[i]; // 최고 점수에 넣기
		}
		sum = sum + A[i]; // 점수 총 합에 넣기
	}
	// 결과는 총 점수 * 100 / 최고점수 / 과목 개수
	double result = sum * 100.0 / max / N;
	cout << result << "n";

//	return 0;
}