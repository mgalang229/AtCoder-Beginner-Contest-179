#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int cnt = 0, best = 0;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (x == y){ 
			cnt++;
		} else {
			cnt = 0;
		}
		best = max(best, cnt);
	}
	cout << (best >= 3 ? "Yes" : "No") << '\n';
	return 0;
}
