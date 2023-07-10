#pragma once

#include <exception>
#include <iostream>

class ErrorHandler : public std::exception
{
	std::string str;
public:
	ErrorHandler(const char* str)
	{
		this->str = std::string(str);
	};
	const char* what() const override
	{
		std::cout << str;
		return str.c_str();
	}
};

