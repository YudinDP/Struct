#include "Tempareture.h"
#include <stdexcept>
//�����������
Temperature::Temperature() {
	degrees = 0;
}

///������ ����������� � ��������(�������)
double Temperature::Get_degrees() {
	return degrees;
}

///������ ����������� � ������������
double Temperature::Get_degreesF() {
	return (degrees * 1.8) + 32;
}

///������ ����������� � ���������
double Temperature::Get_degreesK() {
	return degrees + 273.15;
}

///������ �����������
void Temperature::Set_degrees(double new_degrees) {
	if (new_degrees < -100 || new_degrees > 100)
		throw std::invalid_argument("������������ �������� ���������");
	degrees = new_degrees;
}

///��������� ����������� �� change ������
void Temperature::Change_degrees(double change) {
	if (degrees + change < -100 || degrees + change > 100)
		throw std::invalid_argument("������������ �������� ���������");
	degrees = degrees + change;
}