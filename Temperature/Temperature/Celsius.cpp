#include <iostream>
#include "Temperature.h"

using namespace std;

Celsius::Celsius() {}
Celsius::~Celsius() {}

float F, K, R, Temp;

float Celsius::celsiusToFahrenheit() {
	// Convert Celsius To Fahrenheit
	float F, Temp;
	cout << "Ati selectat Celsius. \n Introduceti gradele in Celsius: "; cin >> Temp;
	F = (Temp * 9 / 5) + 32;
	cout << "Fahrenheit " << F << endl;
	return Temp;	
}

float Celsius::celsiusToKelvin() {
	// Convert Celsius to Kelvin
	float K, Temp;
	cout << "Ati selectat Celsius. \n Introduceti gradele in Celsius: "; cin >> Temp;
	K = Temp + 273.15f;
	cout << "Kelvin " << K << endl;
	return Temp;
}

float Celsius::celsiusToRankine() {
	// Convert Celsius to Rankine
	float R, Temp;
	cout << "Ati selectat Celsius. \n Introduceti gradele in Celsius: "; cin >> Temp;
	R = (Temp + 273.15f) * 9 / 5;
	cout << "Rankine " << R << endl;
	return Temp;
}
