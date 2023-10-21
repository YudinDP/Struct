#include "Tempareture.h"
#include <stdexcept>
#include <conio.h>
//конструктор
Temperature::Temperature() {
	degrees = 0;
	measure = "C";//по умолчанию градусы по Цельсию
}

///геттер градусов - базовый
double Temperature::Get_degrees() {
	if (measure == "C") {
		return degrees;
	}
	if (measure == "F") {
		return (degrees - 32) / 1.8;//для всегда правильного вывода из любой системы счисления
	}
	if (measure == "K") {
		return degrees - 273.15;
	}
}

///геттер градусов - Фаррингейты
double Temperature::Get_degreesF() {
	if (measure == "C") {
		return (degrees*1.8) + 32;
	}
	if (measure == "F") {
		return degrees;   //для всегда правильного вывода из любой системы счисления
	}
	if (measure == "K") {
		return (degrees * (9/5) - 459.67);
	}
}

///геттер градусов - Кельвины
double Temperature::Get_degreesK() {
	if (measure == "C") {
		return degrees + 273.15;
	}
	if (measure == "F") {
		return (degrees + 459.67) * 5/9;//для всегда правильного вывода из любой системы счисления
	}
	if (measure == "K") {
		return degrees;
	}
}

///сеттер градусов в Цельсиях
void Temperature::Set_degrees(double new_degrees) {
	if (new_degrees < -273.15)
		throw std::invalid_argument("Некорректный аргумент");
	degrees = new_degrees;
	measure = "C";
}

///сеттер градусов в Фарренгейтах
void Temperature::Set_degreesF(double new_degrees) {
	if (new_degrees < -459.67)
		throw std::invalid_argument("Некорректный аргумент");
	degrees = new_degrees;
	measure = "F";
}

///сеттер градусов в Кельвинах
void Temperature::Set_degreesK(double new_degrees) {
	if (new_degrees < 0)
		throw std::invalid_argument("Некорректный аргумент");
	degrees = new_degrees;
	measure = "K";
}

///изменение градусов на change единиц
void Temperature::Change_degrees(double change) {
	if (((measure == "C") && (degrees + change < -273.15)) || ((measure == "F") && (degrees + change < -459.67)) || ((measure == "K") && (degrees + change < 0)))
		throw std::invalid_argument("Некорректный аргумент");
	degrees = degrees + change;
}