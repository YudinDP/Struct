#pragma once

///Температура(возможно в будущем погода)
class Temperature {
private:
	//поля
	double degrees;///градусы по Цельсию

public:
	//конструктор
	Temperature();

	///геттер температуры в Цельсиях(базовый)
	double Get_degrees();

	///геттер температуры в Фарренгейтах
	double Get_degreesF();

	///геттер температуры в Кельвинах
	double Get_degreesK();

	///сеттер температуры
	void Set_degrees(double new_degrees);
	
	///изменение температуры на change единиц
	void Change_degrees(double change);
};