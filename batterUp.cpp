#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n;
	double sum = 0;

	cin >> n;

	int bats[n];
	for (int i = 0; i < n; i++) {
		cin >> bats[i];
	}

	double count = n;
	for (int i = 0; i < n; i++) {
		if (bats[i] < 5 && bats[i] > -1) {
			sum += bats[i];
		}
		else if (bats[i] == -1) {
			count--;
		}
	}

	double percentage = sum/count;
	cout << setprecision(17) << percentage << endl;

	return 0;
}
