#include <stdio.h>
//#include <bits/stdc++.h>

//using namespace std;

int min(int a, int b)
{
	if (a > b)
		return b;

	return a;
}

int main()
{
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	int mn = min(a + d, a + e);

	if (b + d > b + e)
		mn = min(mn, b + e);
	else
		mn = min(mn, b + d);

	if (c + d > c + e)
		mn = min(mn, c + e);
	else
		mn = min(mn, c + d);

	printf("%d", mn - 50);
	return 0;
}