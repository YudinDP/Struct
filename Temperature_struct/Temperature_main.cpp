//пример 1
//нужно ввести информацию о 23 градусах по цельсию, уменьшить температуру на 296.15 и вывести это в Кельвинах

//пример 2
//ввести 0 градусов по кельвину, прибавить 10, вывести как Фаренгейты и как Цельсии

#include "Tempareture.h"
#include <iostream>
using namespace std;
int main()
{
    Temperature deg; //переменная вбстрактного типа

    //пример 1
    deg.Set_degrees(23);//вводим температуру в цельсиях

    deg.Change_degrees(-296.15);//уменьшаем на 296.15

    cout << "Ex.1 Temp:  " << deg.Get_degreesK() << endl; //выводим в кельвинах, правильный ответ - 0


    //пример 2
    
    deg.Set_degreesK(0);//вводим 0 в Кельвинах

    deg.Change_degrees(10);//прибавляем 10

    cout << "Ex.2 Temp F:   " << deg.Get_degreesF() << endl;
    cout << "Ex.2 Temp C:   " << deg.Get_degrees();  //вывод в Фаренгейтах и Цельсиях
}

