#include <stdexcept>
#pragma once
///�����������(�������� � ������� ������)
class Temperature {
	private:
		//����
		double degrees;///������� �� �������

	public:
		//�����������
		Temperature() { 
			degrees = 0;
		}

		///������ �����������
		double Get_degrees() {
			return degrees;
		}

		///������ �����������
		double Set_degrees(double new_degrees) {
			if (new_degrees < -100 || new_degrees > 100)
				throw std::invalid_argument("������������ �������� ���������");
			degrees = new_degrees;
		}
};