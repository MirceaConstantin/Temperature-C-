#include <iostream>
#include "Temperature.h"

using namespace std;

Fahrenheit::Fahrenheit() {}
Fahrenheit::~Fahrenheit() {}

float Fahrenheit::fahrenheitToCelsius() {
	// Convert Fahrenheit to Celsius
	float C, Temp;
	cout << "Ati selectat Fahrenheit. \n Introduceti gradele in Fahrenheit: "; cin >> Temp;
	C = (Temp - 32) * 5 / 9;
	cout << "Celsius " << C << endl;
	return Temp;
}

float Fahrenheit::fahrenheitToKelvin() {
	// Convert Fahrenheit to Kelvin
	float K, Temp;
	cout << "Ati selectat Fahrenheit. \n Introduceti gradele in Fahrenheit: "; cin >> Temp;
	K = (Temp + 459.67f) * 5 / 9;
	cout << "Kelvin " << K << endl;
	return Temp;
}

float Fahrenheit::fahrenheitToRankine() {
	// Convert Fahrenheit to Rankine
	float R, Temp;
	cout << "Ati selectat Fahrenheit. \n Introduceti gradele in Fahrenheit: "; cin >> Temp;
	R = Temp + 459.67f;
	cout << "Rankine " << R << endl;
	return Temp;
}