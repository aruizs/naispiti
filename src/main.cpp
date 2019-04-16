#include <iostream>
#include <string>
#include "complex_ops.hpp"

int main()
{
	std::cout << "Hola Mundo" + std::to_string(complex_sum(4, 8)) << std::endl;
	return 0;
}