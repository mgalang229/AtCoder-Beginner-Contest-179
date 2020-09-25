#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	string s;
	cin >> s;
	if (s[(int) s.size() - 1] != 's') {
		cout << s << 's';
	} else if (s[(int) s.size() - 1] == 's') {
		cout << s << "es";
	}
	cout << '\n';
	return 0;
}
