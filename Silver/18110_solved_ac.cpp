#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int N;
    cin >> N;

    vector<int> scores(N);

    for (int i = 0; i < N; i++) 
    {
        cin >> scores[i];
    }

    // ������ ���� ���
    if (N == 0) 
    {
        cout << 0 << endl;
        return 0;
    }

    // ���� ����
    sort(scores.begin(), scores.end());

    // ������ ���� ���
    int cut = round(N * 0.15);

    // ������� ���
    int sum = 0;

    for (int i = cut; i < N - cut; i++)
    {
        sum += scores[i];
    }

    int count = N - 2 * cut; // ���� ���� ����
    int result = round((double)sum / count);

    cout << result << endl;
    return 0;
}
