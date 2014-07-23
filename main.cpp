#include <iostream>
#include "fix.hpp"

int main()
{
	fix::fix<0,23> a;
	fix::fix<0,23> b = fix::to_fix<0,23>(7);
	std::cout << "Hi: " << a << ", " << b << std::endl;
	return 0;
}


