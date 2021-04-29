#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char word[100], result[50] = {0};
	int j = 0;

	cin >> word;

	result[0] = word[0];
	int length = strlen(word);

	for (int i = 1; i < length; i++) {
		if (word[i] == 45) {
			j++;
			result[j] = word[i+1];
		}
	}

	int resultLength = strlen(result);

	for (int i = 0; i < resultLength; i++) {
		cout << result[i];
	}
	cout << endl;

	return 0;
}
