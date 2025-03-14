#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	multimap<int, string> m;
	
	for (int i = 0; i < N; i++)
	{
		int year;
		string name;
		
		cin >> year >> name; 
		 
		m.insert(make_pair(year, name));
	}

	

	for (auto it = m.begin(); it != m.end(); it++)
	{
		cout << it->first << " " << it->second << "\n";
		
	}

	
	//ȸ������ ���̿� �̸��� ������� �ش�
	//���̰� �����ϴ� ��(��������), ���� ������ ���� ������ ����� �տ� ���� ������ ����
}