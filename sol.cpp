#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x;
		cin >> x;
		string s;
		cin >> s;
		int c = 0;
		int d = 0;
		for (int i = 0; i < (int) s.size(); i++) {
			if (s[i] == 'C') {
				c += 2;
			} else if (s[i] == 'N') {
				d += 2;
			} else {
				c++;
				d++;
			}
		}
		int ans = 0;
		if (c == d) {
			ans = 55 * x;
		} else if (c > d) {
			ans = 60 * x;
		} else {
			ans = 40 * x;
		}
		cout << ans << '\n';
	}
	return 0;
}