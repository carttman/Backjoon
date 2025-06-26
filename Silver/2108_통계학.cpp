#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> numbers(n);
    map<int, int> frequency;

    int sum = 0;

    for (int i = 0; i < n; i++) 
    {
        cin >> numbers[i];

        sum += numbers[i];
        frequency[numbers[i]]++;
    }

    // 산술평균
    double mean = round((double)sum / n);

    // 중앙값을 구하기 위해 정렬
    sort(numbers.begin(), numbers.end());

    int median = numbers[n / 2];

    // 최빈값 구하기
    int mode = numbers[0];
    int maxFreq = 0;

    bool secondMode = false;
    for (auto &entry : frequency) 
    {
        if (entry.second > maxFreq) 
        {
            maxFreq = entry.second;
            mode = entry.first;
            secondMode = false;
        }
    	else if (entry.second == maxFreq) 
        {
            if (!secondMode) 
            {
                mode = entry.first;
                secondMode = true;
            }
        }
    }
    // 범위 구하기
    int range = numbers.back() - numbers.front();

    // 결과 출력
    cout << (int)mean << '\n';
    cout << median << '\n';
    cout << mode << '\n';
    cout << range << '\n';
    return 0;
}
