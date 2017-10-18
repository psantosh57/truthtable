#include "truthtable.h"

void truthtable::allocate(int n) {

	cout << "Allocating char array of length " << pow(2, n) << endl;
	int length = pow(2, n);

#if 0
	_array = new char*[length];

	for (int i = 0; i < n; i++) {

		_array[i] = new char[n];
	}
#endif // 0

	//_array(n);


}

void truthtable::fillArray(int n) {

	int length = pow(2, n) - 1;
	int mid = ((length+1)/ 2);
	int i = 0;

	for (int j = 0; j < mid; j++) {
		int temp = j;
		int k = 0;
		i = 0;
		while (k < n) {

			_array[(length - j)][i] = (temp & 1);
			_array[j][i++] = !(_array[(length - j)][i]);
			temp = temp >> 1;
			k++;

		}
				

	}

	

	

}

void truthtable::display(int n) {

	//cout << _array[row][col] << endl;

	int length = pow(2, n) - 1;

	for (int i = length; i >= 0; i--) {

		int k = 0; 
		while (k < n) {

			cout << _array[i][k++];

		}

		cout << endl;

	}

}
