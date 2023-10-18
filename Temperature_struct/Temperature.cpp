#include "Tempareture.h"
#include <stdexcept>
//конструктор
Temperature::Temperature() {
	degrees = 0;
}

///геттер градусов - базовый
double Temperature::Get_degrees() {
	return degrees;
}

///геттер градусов - Фаррингейты
double Temperature::Get_degreesF() {
	return (degrees * 1.8) + 32;
}

///геттер градусов - Кельвины
double Temperature::Get_degreesK() {
	return degrees + 273.15;
}

///сеттер градусов
void Temperature::Set_degrees(double new_degrees) {
	if (new_degrees < -100 || new_degrees > 100)
		throw std::invalid_argument("Некорректный аргумент");
	degrees = new_degrees;
}

///изменение градусов на change единиц
void Temperature::Change_degrees(double change) {
	if (degrees + change < -100 || degrees + change > 100)
		throw std::invalid_argument("Некорректный аргумент");
	degrees = degrees + change;
}