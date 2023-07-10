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

	smart_array& operator=(smart_array& ar)
	{
		if (this != &ar)
		{
			delete[] var;
			this->var_size = ar.var_size;
			var = new int[var_size];
			for (int i = 0; i < this->var_size; i++)
			{
				var[i] = ar.var[i];
			}
		}
		return *this;
	}

private:

	int* var;
	int counter = 0;
	int var_size = 0;
};

