#include <iostream>
using namespace std;

int r[500001]{}, c[500001]{};

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m, q; cin >> n >> m >> q;

	while (q--) {

		int query, x, v; cin >> query >> x >> v;

		if (query == 1)
			r[x] += v;

		else {
			c[x] += v;

		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			cout << r[i] + c[j] << ' ';
		cout << '\n';
	}
}