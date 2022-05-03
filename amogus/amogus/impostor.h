#pragma once
#include <iostream>
#include <string>
class impostor 
{
	public:
	double together(double firstNumber, double );

	void say(std::string message);

	template <typename T>
	void say(T message)
	{
		say(std::to_string(message));
	}

	void sus(int antal);

	int crewmate(double round);
	double crewmate(double round, int decimals);
};