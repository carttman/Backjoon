#include <stdio.h>
//#include <bits/stdc++.h>

//using namespace std;

int main()
{
	char str[256];
	int cnt = 0;

	while (1)
	{
		gets(str);

		if (str[0] == '#')
			break;

		for (int i=0; str[i] != '\0'; i++)
		{
			if (str[i] == 'a' || str[i] == 'A')
				cnt++;
			else if (str[i] == 'e' || str[i] == 'E')
				cnt++;
			else if (str[i] == 'i' || str[i] == 'I') 
				cnt++;
			else if (str[i] == 'o' || str[i] == 'O')
				cnt++;
			else if (str[i] == 'u' || str[i] == 'U') 
				cnt++;
		}

		printf("%d\n", cnt);
		cnt = 0;
	}

	return 0;
}