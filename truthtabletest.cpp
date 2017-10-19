/*----------------------------------------------------------------
Copyright (c) 2017 Author: Jagadeesh Vasudevamurthy
file: truthtabletest.cpp

On linux:
g++ truthtable.cpp truthtabletest.cpp
valgrind a.out

-----------------------------------------------------------------*/

/*----------------------------------------------------------------
This file test truthtable object 
-----------------------------------------------------------------*/

/*----------------------------------------------------------------
All includes here
-----------------------------------------------------------------*/
#include "truthtable.h"

/*----------------------------------------------------------------
You cannot change anything in this file

for n = 3 (say), the output must look like this
0: 000
1: 001
2: 010
3: 011
4: 100
5: 101
6: 110
7: 111
Number of rows for a truth table of 3 = 8
Run time for truthtable for n = 3 is 0.004 secs

after n > 8 the answers should like this:

Number of rows for a truth table of 9 = 512
Run time for truthtable for n = 9 is 0.003 secs
Number of rows for a truth table of 10 = 1024
Run time for truthtable for n = 10 is 0.003 secs
Number of rows for a truth table of 11 = 2048
Run time for truthtable for n = 11 is 0.002 secs
Number of rows for a truth table of 12 = 4096
Run time for truthtable for n = 12 is 0.001 secs
Number of rows for a truth table of 13 = 8192

Number of rows for a truth table of 31 = 2147483648
Run time for truthtable for n = 31 is 288.325 secs
Number of rows for a truth table of 32 = 4294967296
Run time for truthtable for n = 32 is 578.154 secs
-----------------------------------------------------------------*/
int main() {
#if 1
	for (int n = 1; n < 32; ++n) {
		clock_t start = clock();
		bool verbose = (n < 9) ? true : false;
		truthtable a(n, verbose);
		clock_t end = clock();
		double d = double(end - start) / CLOCKS_PER_SEC;
		cout << "Run time for truthtable for n = " << n << " is " << d << " secs" << endl;
	}
#endif // 0

#if 0
	int n = 9;
	clock_t start = clock();
	truthtable t(n, false);
	clock_t end = clock();
	double d = double(end - start) / CLOCKS_PER_SEC;
	cout << "Run time for truthtable for n = " << n << " is " << d << " secs" << endl;
	//t.fillArray(3);
	//t.display(3);
	

#endif //1

#if 0
	t.display(2, 0);
	t.display(2, 1);
	t.display(3, 0);
	t.display(3, 1);



	int j = 2;
	cout << !bool((j & 1)) << endl;
	j = j >> 1;
	cout << !bool((j & 1)) << endl;


	char ch = '0';
	cout << (int)ch << endl;
	cout << !((int)ch - '0') << endl;

#endif // 0

	//cout << !0 << endl;
  return 0 ;
}

//EOF

