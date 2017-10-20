#ifndef TRUTHTABLE_H
#define TRUTHTABLE_H

#include "../util/util.h"
#include "../darray/darray.h"

class truthtable {


public:

	truthtable(int n = 1, bool verbose = false) : _display(verbose) {

		fillArray(n);

	}

	~truthtable() {}

	void fillArray(int n);
	
private:

	bool _display;

};




#endif