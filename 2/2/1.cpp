
#include <iostream>
#include <exception>
#include "smart_array.h"
#include "ErrorHandler.h"



int main()
{
	setlocale(LC_ALL, "Russian");
	try {
		smart_array arr(5);

		arr.add_element(1);
		arr.add_element(4);
		arr.add_element(155);
		arr.add_element(14);
		arr.add_element(15);

		std::cout << arr.get_element(1) << std::endl;

		smart_array new_array(2);
		new_array.add_element(44);
		new_array.add_element(34);

		smart_array new_array_(2);
		new_array_.add_element(24);
		new_array_.add_element(14);

		arr = new_array;
		smart_array arr1(new_array_);

		std::cout << arr.get_element(1) << std::endl;
		std::cout << arr1.get_element(1) << std::endl;

	}
	catch (const ErrorHandler& ex) {
		std::cout << ex.what();
	}
	return 0;
}
