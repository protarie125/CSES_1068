#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll n;
	cin >> n;

	while (1 != n) {
		cout << n << ' ';

		if (0 == n % 2) {
			n /= 2;
		}
		else {
			n = 3 * n + 1;
		}
	}
	cout << 1;

	return 0;
}