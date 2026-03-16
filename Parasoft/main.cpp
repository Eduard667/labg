
#include <iostream>
#include "Utility.h"
using namespace std;

int main(int argc, char**) {
	Utility utility;
	utility.SetSize(999);
	utility.Process();
}

/*
MRM-37-1 (copy assignment) ? Implemented
MRM-38-1 (copy constructor) ? Implemented
CODSTA-07-3 (void ? ()) ? Fixed in ctor/dtor
CODSTA-CPP-53-3 (const locals) ? result is const
CODSTA-MCPP-23-3 (non-virtual dtor ? final) ? Class is final
MRM-40_d-3 (both copy ops with nontrivial dtor) ? Both present
MRM-49-3 (pointers ? declare copy ops) ? Both present
*/