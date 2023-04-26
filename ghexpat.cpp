#include <iostream>
using namespace std;
 
int main() {
	int nrings = 36;
	char digits[3] = {'0', '1', '0'};
	for (int i = 0; i < 2 * nrings + 1; i++) {
		int NumSpaces = abs(nrings - i);
		int NumDigits = nrings + i + 1;
		if (i > nrings) NumDigits = 3 * nrings - i + 1;
		for (int j = 0; j < NumSpaces; j++) {
			cout << " ";
		}
		int StartDigitId = (nrings + i + 1) % 3;
		if (i > nrings) StartDigitId = (nrings + (2 * nrings - i) + 1) % 3;
		for (int j = 0; j < NumDigits; j++) {
			cout << digits[(j + StartDigitId) % 3];
			if (j != NumDigits - 1) cout << " ";
		}
		cout << ";" << endl;
	}
	return 0;
}
