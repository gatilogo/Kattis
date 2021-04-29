#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, w, h;

	cin >> n >> w >> h;

	int matches[n];
	for (int i = 0; i < n; i++) {
		cin >> matches[i];
	}

	int hypoteneus = sqrt(w*w + h*h);

	for (int i = 0; i < n; i++) {
		if (matches[i] > hypoteneus) {
			cout << "NE" << endl;
		}
		else {
			cout << "DA" << endl;
		}
	}

	return 0;
}
