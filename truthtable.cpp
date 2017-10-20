#include "truthtable.h"

void truthtable::fillArray(int n) {

	unsigned long long length = pow(2, n) - 1;

	for (unsigned long long j = 0; j <= length; j++) {
		unsigned long long temp = j;
		int k = 0;
		while (k < n) {

			if (_display) {

				cout<< (char)('0' + (temp & 1));

			}

			temp = temp >> 1;
			k++;
		}

		if (_display) {

			cout << endl;

		}


	}

}

