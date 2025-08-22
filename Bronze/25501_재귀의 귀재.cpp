#include <iostream>

using namespace std;

int recursion(const string& s, const int l, const int r, int& cnt)
{
    cnt++;

    if (l >= r) 
		return 1;

    if (s[l] != s[r]) 
		return 0;

	return recursion(s, l + 1, r - 1, cnt);
}

int isPalindrome(const string& s, int& cnt)
{
    return recursion(s, 0, s.size() - 1, cnt);
}

int main()
{
    int t;
	cin >> t;

    while (t--)
    {
	    int cnt = 0;

        string s;
        cin >> s;

       cout <<  isPalindrome(s, cnt) << " " << cnt << "\n";
    }

    
}