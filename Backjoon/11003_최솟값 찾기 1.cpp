#include <deque>
#include <iostream>
using namespace std;

typedef pair<int, int> Node; // 인덱스, 숫자 저장하는 노드
deque<Node> Window; 
int N, L;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> L;
	int currNumber;

	for(int i=0; i < N; i++)
	{
		cin >> currNumber;

		while(Window.size() && Window.back().second > currNumber) // 윈도우의 크기만큼 순환, 윈도우의 마지막 값이 현재 값보다 크다면 순환시작 
		{
			Window.pop_back(); // 마지막 값 윈도우에서 뺀다.
		}

		Window.push_back(Node(i, currNumber));

		if(Window.front().first + L <= Window.back().first) // 윈도우의 범위를 벗어났다면, 첫번재 인덱스 <= 마지막 데이터 인덱스 - L
		{
			Window.pop_front(); // 맨 앞에 값 뺀다.
		}

		cout << Window.front().second << " ";
	}


}