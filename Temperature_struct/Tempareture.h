#pragma once

///класс - температура
class Temperature {
private:
	//поля
	double degrees;///поле - градусы

public:
	//конструктор
	Temperature();

	///геттер градусов - базовый
	double Get_degrees();

	///геттер градусов - Фаррингейты
	double Get_degreesF();

	///геттер градусов - Кельвины
	double Get_degreesK();

	///сеттер градусов
	void Set_degrees(double new_degrees);
	
	///изменение градусов на change единиц
	void Change_degrees(double change);
};