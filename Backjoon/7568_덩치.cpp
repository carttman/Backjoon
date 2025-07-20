#include <iostream>
#include <tuple>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//��ġ�� Ű�� �����Է� ǥ���ؼ� ����� �ű��
	// �����Դ� x kg, Ű�� y cm�̸� ��ġ�� (x, y)�̴�
	// A�� B�� ��ġ�� ���� (x,y) (p,q)��� �Ҷ� x > p,  y > q��� A�� B���� ��ġ�� �� ũ��.
	// ���� ���溸�� Ű�� �� ũ�� �����԰� �۴ٸ� ��ġ�� ũ�ٰ� �� �� ����.

	// N ���� ���ܿ��� �� ����� ��ġ ����� �ڽź��� �� "ū ��ġ" �� ��� ���� ��������.
	// �ڽź��� �� ū ��ġ�� ����� k���̸� �ڽ��� ��ġ ����� k + 1�� �ȴ�.
	// ���� ��ġ ����� �����Ѵ�.


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
			// Ű, ������ ��� �ڽ��� ũ�ٸ� ��� ī��Ʈ ���
			if (get<0>(A[i]) < get<0>(A[j]) && get<1>(A[i]) < get<1>(A[j]))
			{
				get<2>(A[i])++;
			}
			
		}
		cout << get<2>(A[i])+1 << "\n";
	}

}