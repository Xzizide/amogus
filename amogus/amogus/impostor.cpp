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
	for (int i = 0; i < to_string(round).length(); i++) {
		if (to_string(round)[i] == '.') {
			if (to_string(round)[i + 1] >= '5') {
				string fixed = to_string(round).substr(0, to_string(round).find(".", 0));
				return stoi(fixed) + 1;
			}
			else {
				string fixed = to_string(round).substr(0, to_string(round).find(".", 0));
				return stoi(fixed);
			}
		}
	}
	return int(round);
}

double impostor::crewmate(double round, int decimals) {
	for (int i = 0; i < to_string(round).length(); i++) {
		if (to_string(round)[i] == '.') {
			if (to_string(round)[i + decimals] >= '5') {
				int pos = to_string(round).find('.');
				pos = pos + decimals + 1;
				string fixed = to_string(round).substr(0, pos);
				return (double)atof(fixed.c_str());
			}
			else {
				int pos = to_string(round).find('.');
				pos = pos + decimals+1;
				string fixed = to_string(round).substr(0, pos);
				return (double)atof(fixed.c_str());
			}
		}
	}
	return double(round);
}