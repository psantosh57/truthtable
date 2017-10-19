#ifndef TRUTHTABLE_H
#define TRUTHTABLE_H

#include "../util/util.h"
#include "../darray/darray.h"

class truthtable {


public:

	truthtable(int n = 1, bool verbose = false) : _array(nullptr), _display(verbose) {

		if (_display) {

			cout << "In truthtable const" << endl;
		}

		//allocate(n);
		int length = pow(2, n);
		_array = new char* [length];
		for (int i = 0; i < length; i++) {

			_array[i] = new char[n];
			//fillArray(i, n);
		}

		fillArray(n);

		if (_display) {

			display(n);
		}
		


	}

	~truthtable() {

		if (_display) {

			cout << "In truthtable dest" << endl;
		}

	}

	void allocate(int n);
	void fillArray(int n);
	void display(int n);

private:

	char** _array;
	bool _display;



};




#endif