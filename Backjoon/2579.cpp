#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// ����� �� ���� ��, �� ���� ���� �� �ִ�.
	// ���ӵ� �� ���� ����� ������ �ȵȴ�. �������� ����
	// ������ ����� ������ ��´�


	//�ִ��� ���϶�

	// ���� ����� �ǳ� ��, �� ĭ �̳��� �� ū ���� ����� ����.
	// ���Ӱ�� ī��Ʈ�� 3�� �̻��̶�� �� ����� �����Ѵ�
	// ���� ����� ������ ����̶�� ������ ����.

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


		// ���� ����� ������ ����̶�� ������ ����.
		if (i+1 >= A.size() - 1)
		{
			answer += A[A.size()-1];
			break;
		}

		// ���Ӱ�� ī��Ʈ�� 2��� �� ĭ �ڿ� �ִ� ��� ������
		// ī��Ʈ �ʱ�ȭ ���ֱ�
		if (cnt == 2)
		{
			answer += A[i+2];
			cnt = 0;
			break;
		}
			// ���� ����� �ǳ� ��, �� ĭ �̳��� �� ū ���� ����� ����.
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