#include "truthtable.h"

void truthtable::fillArray(int n) {

	unsigned long long length = pow(2, n) - 1;

	for (unsigned long long j = 0; j <= length; j++) {
		char* tempCh = new char[(n+1)];
		tempCh[n] = '\0';
		unsigned long long temp = j;
		int k = 0;
		while (k < n) {

			tempCh[(n - k - 1)] = (char)('0' + (temp & 1));
			temp = temp >> 1;
			k++;
		}

		if (_display) {

			int i = 0;
			cout << setw(3) << j << setw(3) << " : " << setw(3);
			while (tempCh[i] != '\0') {

				cout << tempCh[i++];

			}

			cout << endl;

		}

		delete[] tempCh;

	}

}

