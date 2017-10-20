#ifndef TRUTHTABLE_H
#define TRUTHTABLE_H

#include "../util/util.h"
#include "../darray/darray.h"

class truthtable {


public:

	truthtable(int n = 1, bool verbose = false) : _display(verbose) {

		if (_display) {

			cout << "In truthtable const" << endl;
		}


		fillArray(n);

	}

	~truthtable() {

		if (_display) {

			cout << "In truthtable dest" << endl;
		}

	}

	void fillArray(int n);
	
private:

	bool _display;



};




#endif