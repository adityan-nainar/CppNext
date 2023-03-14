//============================================================================
// Name        : namespace.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

namespace test{
	int val = 100;

	class tester{
		public:
			int name=200;
	};
}

int main() {
	test::tester t1;
	//cout<<test::val;
	cout<<t1.name;
	return 0;
}
