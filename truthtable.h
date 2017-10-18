#ifndef TRUTHTABLE_H
#define TRUTHTABLE_H

#include "../util/util.h"
#include "../darray/darray.h"

class truthtable {


public:

	truthtable(int n = 1, bool verbose = false) : _array(n), _display(verbose) {

		if (_display) {

			cout << "In truthtable const" << endl;
		}

		//allocate(n);


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

	darray<darray<int>> _array;
	bool _display;



};




#endif