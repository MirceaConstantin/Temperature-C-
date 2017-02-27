#include <iostream>
#include "Temperature.h"

using namespace std;

Kelvin::Kelvin() {}
Kelvin::~Kelvin() {}

float Kelvin::kelvinToCelsius() {
	// Convert Kelvin To Celsius
	float C, Temp;
	cout << "Ati selectat Kelvin. \n Introduceti gradele in Kelvin: "; cin >> Temp;
	C = Temp - 273.15f;
	cout << "Celsius " << C << endl;
	return Temp;
}

float Kelvin::kelvinToFahrenheit() {
	// Convert Kelvin To Fahrenheit
	float F, Temp;
	cout << "Ati selectat Kelvin. \n Introduceti gradele in Kelvin: "; cin >> Temp;
	F = (Temp * 9 / 5) - 459.67f;
	cout << "Fahrenheit " << F << endl;
	return Temp;
}

float Kelvin::kelvinToRankine() {
	// Convert Kelvin To Rankine
	float R, Temp;
	cout << "Ati selectat Kelvin. \n Introduceti gradele in Kelvin: "; cin >> Temp;
	R = Temp * 9 / 5;
	cout << "Rankine " << R << endl;
	return Temp;
}