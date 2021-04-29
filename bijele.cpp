#include <iostream>

using namespace std;

int addOrRemove(int input, int desire) {
	int result = desire - input;
	return result;
}

int main() {
	int a, b, c, d, e, f;

	cin >> a >> b >> c >> d >> e >> f;
	cout << addOrRemove(a, 1) << " " << addOrRemove(b, 1) << " " <<
					addOrRemove(c, 2) << " " << addOrRemove(d, 2) << " " <<
					addOrRemove(e, 2) << " " << addOrRemove(f, 8) << endl;

	return 0;
}
