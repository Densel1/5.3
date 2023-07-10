
#include <iostream>
#include <string>

#include "smart_array.h"
#include "ErrorHandler.h"


bool smart_array::add_element(int element)
{
	if (counter >= var_size) throw ErrorHandler("Error: end of array");
	var[counter++] = element;
	return 0;
}

int smart_array::get_element(int element)
{

	if (element < var_size) return var[element];
	else throw ErrorHandler("Error: end of array");
}

