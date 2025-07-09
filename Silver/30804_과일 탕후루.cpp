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

		//처음 등장하는 과일타입이면
		if (fruits[fruit] == 0) 
		{
			fruitVariant++;
		}

		fruits[fruit]++;

		// 종류가 2 이상이면 앞 과일 뺀다
		while (fruitVariant > 2) 
		{
			int currFruit = q.front();

			fruits[currFruit]--;

			q.pop();

			// 해당 과일갯수가 0이 되었다면 종류 깎는다.
			if (fruits[currFruit] == 0)
			{
				fruitVariant--;
			}
		}
		//q의 크기는 탕후루의 크기
		result = max(result, static_cast<int>(q.size()));
	}

	cout << result;

	return 0;
}