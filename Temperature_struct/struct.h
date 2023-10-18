#include <stdexcept>
#pragma once
///Температура(возможно в будущем погода)
class Temperature {
	private:
		//поля
		double degrees;///градусы по Цельсию

	public:
		//конструктор
		Temperature() { 
			degrees = 0;
		}

		///геттер температуры
		double Get_degrees() {
			return degrees;
		}

		///сеттер температуры
		double Set_degrees(double new_degrees) {
			if (new_degrees < -100 || new_degrees > 100)
				throw std::invalid_argument("Неподходящее значение аргумента");
			degrees = new_degrees;
		}
};