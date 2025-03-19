#include <iostream>
#include <tuple>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//덩치를 키와 몸무게로 표현해서 등수를 매긴다
	// 몸무게는 x kg, 키는 y cm이면 덩치는 (x, y)이다
	// A와 B의 덩치가 각각 (x,y) (p,q)라고 할때 x > p,  y > q라면 A가 B보다 덩치가 더 크다.
	// 만약 상대방보다 키가 더 크고 몸무게가 작다면 덩치가 크다고 할 수 없다.

	// N 명의 집단에서 각 사람의 덩치 등수는 자신보다 더 "큰 덩치" 의 사람 수로 정해진다.
	// 자신보다 더 큰 덩치의 사람이 k명이면 자신의 덩치 등수는 k + 1이 된다.
	// 같은 덩치 등수도 존재한다.


	int N;
	cin >> N;

	vector<tuple<int, int, int>> A;
	
	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		A.push_back(make_tuple(a, b, 0));
		
	}

	for (int i = 0; i < N; i++)//0
	{
		for (int j = 0; j < N; j++)// 0 / 0 1 2 3 4
		{
			// 키, 몸무게 모두 자신이 크다면 등수 카운트 상승
			if (get<0>(A[i]) < get<0>(A[j]) && get<1>(A[i]) < get<1>(A[j]))
			{
				get<2>(A[i])++;
			}
			
		}
		cout << get<2>(A[i])+1 << "\n";
	}

}