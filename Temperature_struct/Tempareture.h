#pragma once
#include <string>
using namespace std;
///класс - температура
class Temperature {
private:
	//поля
	double degrees;///поле - градусы(по умолчанию в Цельсиях)
	std::string measure;  ///поле - мера измерения градусов, нужна чтобы программа понимала с какой мерой измерения она сейчас работает
	// C - цельсии  F - фаренгейты  K - кельвины

public:
	//конструктор
	Temperature();

	///геттер градусов - базовый(в цельсиях)
	double Get_degreesС();

	///геттер градусов - Фаррингейты
	double Get_degreesF();

	///геттер градусов - Кельвины
	double Get_degreesK();

	///сеттер градусов
	void Set_degreesС(double new_degrees);

	///сеттер градусов в Фарренгейтах
	void Set_degreesF(double new_degrees);

	///сеттер градусов в Кельвинах
	void Set_degreesK(double new_degrees);
	
	///изменение градусов на change единиц
	void Add_degrees(double change);
};