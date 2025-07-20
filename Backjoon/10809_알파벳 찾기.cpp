#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arr[26];
	fill_n(arr, 26, -1);

	string s;
	cin >> s;

	for (int i=0; i<s.size(); i++)
	{
		if (arr[int(s[i]) - 97] == -1)
		{
			arr[int(s[i]) - 97] = i;
		}
	}

	for (int num : arr)
	{
		cout << num << "\n";
	}
}