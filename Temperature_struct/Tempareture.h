#pragma once

///�����������(�������� � ������� ������)
class Temperature {
private:
	//����
	double degrees;///������� �� �������

public:
	//�����������
	Temperature();

	///������ ����������� � ��������(�������)
	double Get_degrees();

	///������ ����������� � ������������
	double Get_degreesF();

	///������ ����������� � ���������
	double Get_degreesK();

	///������ �����������
	void Set_degrees(double new_degrees);
	
	///��������� ����������� �� change ������
	void Change_degrees(double change);
};