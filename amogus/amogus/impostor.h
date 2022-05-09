#pragma once
#include <iostream>
#include <string>
class impostor 
{
	public:
	double together(double firstNumber, double );

	void say(std::string message);

	void say(const char* message)
	{
		say(std::string(message));
	}

	template <typename T>
	void say(T message)
	{
		say(std::to_string(message));
	}

	template <typename T, typename ...Ts>
	void say(T message, Ts ...messages)
	{
		say(message);
		say(messages...);
	}

	void sus();

	int crewmate(double round);
	double crewmate(double round, int decimals);

	double baka(double number, int power);
};