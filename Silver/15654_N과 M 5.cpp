#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
vector<int> A;
vector<int> Temp;
vector<bool> Visited;

void BackTracking()
{
    if (Temp.size() == M)
    {
        for (int n : Temp)
        {
            cout << n << " ";
        }
        cout << "\n";

        return;
    }

    for (int i = 0; i < N; i++)
    {
        if (!Visited[i])
        {
            Visited[i] = true;

            Temp.push_back(A[i]);
            BackTracking();
            Temp.pop_back();
            Visited[i] = false;
        }
    }
}

int main()
{

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;

        A.push_back(a);
    }

    Visited.resize(N, false);

    sort(A.begin(), A.end());

    BackTracking();
}