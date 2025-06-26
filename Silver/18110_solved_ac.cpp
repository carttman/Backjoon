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

    // 점수가 없는 경우
    if (N == 0) 
    {
        cout << 0 << endl;
        return 0;
    }

    // 점수 정렬
    sort(scores.begin(), scores.end());

    // 절사할 개수 계산
    int cut = round(N * 0.15);

    // 절사평균 계산
    int sum = 0;

    for (int i = cut; i < N - cut; i++)
    {
        sum += scores[i];
    }

    int count = N - 2 * cut; // 남은 점수 개수
    int result = round((double)sum / count);

    cout << result << endl;
    return 0;
}
