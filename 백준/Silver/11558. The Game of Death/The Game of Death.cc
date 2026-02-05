#include <iostream>
#include <cstdio>
#include <algorithm> 
#include <cstring>
#include <vector>
#include <cmath>
using namespace std;

int main() {

    int T;
    scanf("%d", &T);

    for (int i=0; i<T; i++) {
        
        int N;
        scanf("%d", &N);

        vector<int> v(N+1);
        for (int i=1; i<=N; i++)
            scanf("%d", &v[i]);

        int cnt = 1;
        int p = v[1];
        while (p != N && cnt <= N) {
            p = v[p];
            cnt++;
        }

        if (cnt > N) cnt = 0;
        printf("%d\n", cnt);
    }
    return 0;
}