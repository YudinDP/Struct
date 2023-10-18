#include "Tempareture.h"
#include <stdexcept>
//конструктор
Temperature::Temperature() {
	degrees = 0;
}

///геттер температуры в Цельсиях(базовый)
double Temperature::Get_degrees() {
	return degrees;
}

///геттер температуры в Фарренгейтах
double Temperature::Get_degreesF() {
	return (degrees * 1.8) + 32;
}

///геттер температуры в Кельвинах
double Temperature::Get_degreesK() {
	return degrees + 273.15;
}

///сеттер температуры
void Temperature::Set_degrees(double new_degrees) {
	if (new_degrees < -100 || new_degrees > 100)
		throw std::invalid_argument("Неподходящее значение аргумента");
	degrees = new_degrees;
}

///изменение температуры на change единиц
void Temperature::Change_degrees(double change) {
	if (degrees + change < -100 || degrees + change > 100)
		throw std::invalid_argument("Неподходящее значение аргумента");
	degrees = degrees + change;
}