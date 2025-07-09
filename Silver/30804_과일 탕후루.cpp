#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int> q;
	int fruits[10] = {0,};

	int n;
	cin >> n;

	int fruitVariant = 0;
	int result = 0;

	while (n--) 
	{
		int fruit;
		cin >> fruit;

		q.push(fruit);

		//ó�� �����ϴ� ����Ÿ���̸�
		if (fruits[fruit] == 0) 
		{
			fruitVariant++;
		}

		fruits[fruit]++;

		// ������ 2 �̻��̸� �� ���� ����
		while (fruitVariant > 2) 
		{
			int currFruit = q.front();

			fruits[currFruit]--;

			q.pop();

			// �ش� ���ϰ����� 0�� �Ǿ��ٸ� ���� ��´�.
			if (fruits[currFruit] == 0)
			{
				fruitVariant--;
			}
		}
		//q�� ũ��� ���ķ��� ũ��
		result = max(result, static_cast<int>(q.size()));
	}

	cout << result;

	return 0;
}