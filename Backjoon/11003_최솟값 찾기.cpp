#include <deque>
#include <iostream>
using namespace std;

typedef pair<int, int> Node; // �ε���, ���� �����ϴ� ���
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

		while(Window.size() && Window.back().second > currNumber) // �������� ũ�⸸ŭ ��ȯ, �������� ������ ���� ���� ������ ũ�ٸ� ��ȯ���� 
		{
			Window.pop_back(); // ������ �� �����쿡�� ����.
		}

		Window.push_back(Node(i, currNumber));

		if(Window.front().first + L <= Window.back().first) // �������� ������ ����ٸ�, ù���� �ε��� <= ������ ������ �ε��� - L
		{
			Window.pop_front(); // �� �տ� �� ����.
		}

		cout << Window.front().second << " ";
	}


}