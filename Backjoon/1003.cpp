#include <iostream>

using namespace std;

static pair<int, int> tmp = {0, 0};

int fibonacci(int n) {

    if (n == 0) 
    {
        tmp.first++;
       
        return 0;
    }
    else if (n == 1) 
    {
        tmp.second++;
      
        return 1;
    }
    else 
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    int Tcase;
    cin >> Tcase;

    for (int i = 0; i < Tcase; i++)
    {
        int n;
        cin >> n;

        fibonacci(n);
        cout <<  tmp.first << " "  << tmp.second << "\n";
        tmp = {0, 0};
    }
}