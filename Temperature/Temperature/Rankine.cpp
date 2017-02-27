#include <iostream>
#include "Temperature.h"

using namespace std;

Rankine::Rankine() {}
Rankine::~Rankine() {}

float Rankine::rankineToCelsius() {
	// Convert Rankine To Celsius
	float C, Temp;
	cout << "Ati selectat Rankine. \n Introduceti gradele in Rankine: "; cin >> Temp;
	C = (Temp - 491.67f) * 5 / 9;
	cout << "Celsius " << C << endl;
	return Temp;
}

float Rankine::rankineToFahrenheit() {
	// Convert Rankine To Celsius
	float F, Temp;
	cout << "Ati selectat Rankine. \n Introduceti gradele in Rankine: "; cin >> Temp;
	F = Temp - 459.67f;
	cout << "Fahrenheit " << F << endl;
	return Temp;
}

float Rankine::rankineToKelvin() {
	// Convert Rankine To Kelvin
	float K, Temp;
	cout << "Ati selectat Rankine. \n Introduceti gradele in Rankine: "; cin >> Temp;
	K = Temp * 5 / 9;
	cout << "Kelvin " << K << endl;
	return Temp;
}