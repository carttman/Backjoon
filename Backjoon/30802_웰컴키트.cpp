#include <iostream>

using namespace std;

int main()
{
	int N;
	int size[6];
	int T, P;

	// 참가자 수
	cin >> N;

	// 티셔츠 사이즈별 신청자 수
	for (int i=0; i<6; i++)
	{
		cin >> size[i];
	}

	// 티셔츠, 펜 묶음 수
	cin >> T >> P;

	int min = 0;

	for (int i=0; i< 6; i++)
	{
		//각 티셔츠별 신청자 수 % 참가자 수
		if (size[i] % T == 0)
		{
			min += size[i] / T;
		}
		else
		{
			min += size[i] / T + 1;
		}
	}
	
	cout << min << "\n";
	//P자루씩 최대 몇 묶음, 한 자루씩 몇개 주문
	cout << N / P << " " << N % P;
}