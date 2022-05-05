#include "impostor.h"
using namespace std;

double impostor::together(double n1, double n2) {
	return n1 + n2;
}
void impostor::say(string message) {
	cout << message + '\n';
}
void impostor::sus(int antal) {
	say("antal susses: " + to_string(antal));
}
int impostor::crewmate(double round) {
	string number = to_string(round);
	if (number[number.find('.') + 1] >= '5') {
		string fixed = to_string(round).substr(0, to_string(round).find(".", 0));
		return stoi(fixed) + 1;
	}
	else
	{
		string fixed = to_string(round).substr(0, to_string(round).find(".", 0));
		return stoi(fixed);
	}
}

double impostor::crewmate(double round, int decimals) {
	string number = to_string(round);

	if (number[number.find('.') + decimals + 1] >= '5') {
		int pos = number.find('.') + decimals + 1;
		string fixed = number.substr(0, pos);
		double result = (double)atof(fixed.c_str());
		result += baka(10, -1 * decimals);
		return result;
	}
	else {
		int pos = number.find('.') + decimals + 1;
		string fixed = number.substr(0, pos);
		return (double)atof(fixed.c_str());
	}

	return double(round);
}

double impostor::baka(double number, int power) { //to the power of
	double result = 1;
	if (power > 0) {
		for (int i = 0; i < power; i++) {
			result *= number;
		}
	}
	else if (power < 0) {
		for (int i = 0; i < (power*-1); i++) {
			result *= number;
		}
		result = 1 / result;
	}
	else
		return 1;
	
	return result;
}