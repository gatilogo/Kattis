#include <iostream>

using namespace std;

int main() {
	int n;
	int ans = 0;

	cin >> n;

	int inputs[n];
	for (int i = 0; i < n; i++) {
		cin >> inputs[i];
		if (inputs[i] < 0) {
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}
