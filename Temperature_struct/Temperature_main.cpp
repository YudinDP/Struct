//пример 1
//нужно ввести информацию о 23 градусах по цельсию, уменьшить температуру на 296.15 и вывести это в Кельвинах

//пример 2
//ввести 0 градусов по кельвину, прибавить 10, вывести как Фаренгейты и как Цельсии

//пример 3
//

#include "Tempareture.h"
#include <iostream>
using namespace std;
int main()
{
    Temperature deg; //переменная вбстрактного типа

    //пример 1
    deg.Set_degreesС(23);//вводим температуру в цельсиях

    deg.Add_degrees(-296.15);//уменьшаем на 296.15

    cout << "Correct: 0" << endl;
    cout << "Ex.1 Temp:  " << deg.Get_degreesK() << endl << endl; //выводим в кельвинах, правильный ответ - 0


    //пример 2
    
    deg.Set_degreesK(0);//вводим 0 в Кельвинах

    deg.Add_degrees(10);//прибавляем 10
    cout << "Correct: -449.67    -263.15" << endl;
    cout << "Ex.2 Temp F:   " << deg.Get_degreesF() << endl;
    cout << "Ex.2 Temp C:   " << deg.Get_degreesС() << endl;  //вывод в Фаренгейтах и Цельсиях
}

