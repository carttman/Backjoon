#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<int> stk1;
	stack<int> stk2;
	stack<int> stk3;

	int N; cin >> N;
	for (int i = N; i > 0; i--) {
		stk1.push(i);
	}

	int p, x;
	while (cin >> p >> x) {
		if (p == 1) {
			while (x--) {
				stk2.push(stk1.top());
				stk1.pop();
			}
		}
		else {
			while (x--) {
				stk3.push(stk2.top());
				stk2.pop();
			}
		}
	}
	while (!stk3.empty()) {
		cout << stk3.top() << '\n';
		stk3.pop();
	}
}