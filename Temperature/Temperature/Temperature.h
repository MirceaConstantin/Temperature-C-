#pragma once

class Temperature {
public:

	Temperature();
	~Temperature();

	void show();
};

class Celsius {
public:

	Celsius();
	~Celsius();

	float celsiusToFahrenheit();
	float celsiusToKelvin();
	float celsiusToRankine();
};

class Fahrenheit {
public:

	Fahrenheit();
	~Fahrenheit();

	float fahrenheitToCelsius();
	float fahrenheitToKelvin();
	float fahrenheitToRankine();
};

class Kelvin {
public:

	Kelvin();
	~Kelvin();

	float kelvinToCelsius();
	float kelvinToFahrenheit();
	float kelvinToRankine();

};

class Rankine {
public:

	Rankine();
	~Rankine();

	float rankineToCelsius();
	float rankineToFahrenheit();
	float rankineToKelvin();
};