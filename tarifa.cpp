#include <iostream>

using namespace std;

int main() {
	int x, n;

	cin >> x >> n;

	int months[n];
	int result = x;
	for (int i = 0; i < n ; i++) {
		cin >> months[i];
		result -= months[i];
		result += x;
	}

	cout << result << endl;

	return 0;
}
