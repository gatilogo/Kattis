#include <iostream>

using namespace std;

int main() {
	int inputs[9];
	int sum = 0;
	int a, b;

	for (int i = 0; i < 9; i++) {
		cin >> inputs[i];
		sum += inputs[i];
	}

	for (int i = 1; i < 9; i++) {
		for (int j = 0; j < i; j++) {
			if ((sum - inputs[i] - inputs[j]) == 100) {
				a = i;
				b = j;
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		if ((i != a) && (i != b)) {
			cout << inputs[i] << endl;
		}
	}

	return 0;
}
