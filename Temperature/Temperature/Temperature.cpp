#include <iostream>
#include "Temperature.h"

using namespace std;

Temperature::Temperature() {}
Temperature::~Temperature() {}

void Temperature::show() {
	Celsius cel;
	Fahrenheit fah;
	Kelvin kel;
	Rankine ran;

	char selectUnite, selectUniteToConvert, key;

	do { // Select what temp you whant tipe you want to convert
		cout << "Selecteaza tipul de grade pe care vrei sa il introduci:" << endl;
		cout << "'C' sau 'c' pentru Celsius: " << endl;
		cout << "'F' sau 'f' pentru Fahrenheit: " << endl;
		cout << "'K' sau 'k' pentru Kelvin: " << endl;
		cout << "'R' sau 'r' pentru Rankine: " << endl;
		cin >> selectUnite;

		// Select in what tipe of temp you want to convert
		cout << "Selectaeza in ce tip de grade vrei sa tranformi: " << endl;
		cout << "'C' sau 'c' pentru Celsius: " << endl;
		cout << "'F' sau 'f' pentru Fahrenheit: " << endl;
		cout << "'K' sau 'k' pentru Kelvin: " << endl;
		cout << "'R' sau 'r' pentru Rankine: " << endl;
		cin >> selectUniteToConvert;

		// Start Conversing...

		if (selectUnite == 'C' || selectUnite == 'c') {
			// Celsius			
			if (selectUniteToConvert == 'F' || selectUniteToConvert == 'f')
			{// Celsius To Fahrenheit
				cel.celsiusToFahrenheit();}
			else if (selectUniteToConvert == 'K' || selectUniteToConvert == 'k')
			{// Celsius To Kelvin
				cel.celsiusToKelvin();}
			else if (selectUniteToConvert == 'R' || selectUniteToConvert == 'r')
			{// Celsius To Rankine
				cel.celsiusToRankine();}}
		else if (selectUnite == 'F' || selectUnite == 'f')
		{// Fahrenheit
			if (selectUniteToConvert == 'C' || selectUniteToConvert == 'c')
			{// Fahrenheit To Celsius
				fah.fahrenheitToCelsius();}
			else if (selectUniteToConvert == 'K' || selectUniteToConvert == 'k')
			{//Fahrenheit To Kelvin
				fah.fahrenheitToKelvin();}
			else if (selectUniteToConvert == 'R' || selectUniteToConvert == 'r')
			{// Fahrenheit To Rankine
				fah.fahrenheitToRankine();}}
		else if (selectUnite == 'K' || selectUnite == 'k') {
			// Kelvin
			if (selectUniteToConvert == 'C' || selectUniteToConvert == 'c') {
				// Kelvin To Celsius
				kel.kelvinToCelsius();}
			else if (selectUniteToConvert == 'F' || selectUniteToConvert == 'f') {
				// Kelvin To Fahrenheit
				kel.kelvinToFahrenheit();}
			else if (selectUniteToConvert == 'R' || selectUniteToConvert == 'r') {
				// Kelvin To Rankine
				kel.kelvinToRankine();}}
		else if (selectUnite == 'R' || selectUnite == 'r') {
			// Rankine
			if (selectUniteToConvert == 'C' || selectUniteToConvert == 'c')
			{// Rankine To Celsius
				ran.rankineToCelsius();}
			else if (selectUniteToConvert == 'F' || selectUniteToConvert == 'f')
			{// Ranknine To Celsius
				ran.rankineToFahrenheit();}
			else if (selectUniteToConvert == 'K' || selectUniteToConvert == 'k')
			{// Rankine To Kelvin
				ran.rankineToKelvin();}}
		// Repeat or NO
		cout << "Doriti o alta conversie? \n _>"; cin >> key;
	} while (key == 'y' || key == 'Y');}