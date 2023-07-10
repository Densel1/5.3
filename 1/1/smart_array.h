#pragma once

#include <exception>


class smart_array
{
public:
	smart_array(int size)
	{
		var_size = size;
		var = new int[size];
	};
	bool add_element(int element);
	int get_element(int);
	~smart_array()
	{
		delete[] var;
		var = nullptr;
	}
private:
	int* var;
	int var_size = 0;
	int counter = 0;
};

