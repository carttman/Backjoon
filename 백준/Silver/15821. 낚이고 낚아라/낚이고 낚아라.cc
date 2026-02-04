#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int N, K;
ll dist[100000];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		ll& cur = dist[i];
		int P; cin >> P;
		while (P--) {
			ll x, y; cin >> x >> y;
			cur = max(cur, x * x + y * y);
		}
	}

	sort(dist, dist + N);

	cout << dist[K - 1] << ".00";
}