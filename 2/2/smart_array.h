#pragma once

#include <exception>


class smart_array
{
public:
	static int i;
	smart_array(int size)
	{
        i++;
		var_size = size;
		var = new int[size];
	};
	bool add_element(int element);
	int get_element(int);
	~smart_array()
	{
		if(--i != 0)
		delete[] var;
		var = nullptr;
	}
private:

	int* var;
	int var_size = 0;
	int counter = 0;
};

