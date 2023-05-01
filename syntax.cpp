#include "syntax.h"

void bool_out() {
	const int size = 10;
	bool array[size] = {};

	srand(time(NULL));

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 2;
		std::cout < std::boolalpha << array[i] << std::endl;
	}
}