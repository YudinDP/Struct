//пример 1
//нужно ввести информацию о 23 градусах по цельсию, уменьшить температуру на 296.15 и вывести это в Кельвинах
//author Yudin

//пример 2
//ввести 0 градусов по кельвину, прибавить 10, вывести как Фаренгейты и как Цельсии

//пример 3
//создать массив из 3-х объектов и занести в них значение (их номера)температуры по цельсию после чего прибавить к каждому (их номер) градусов

//пример 4
//создать динамический объект, задать ему 0 градусов по цельсию, затем прибавить 10 и вывести

//пример 5
//создать массив из 3-х динамических объектов и занести в них значение (их номера)температуры по цельсию после чего прибавить к каждому (их номер) градусов

#include "Tempareture.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    Test_Temp();//функция проверяющая корректную работу всех методов класса
    
    setlocale(0, "Russian");

    //пример 1
    Temperature deg; //переменная вбстрактного типа
    deg.Set_degreesС(23);//вводим температуру в цельсиях

    deg.Add_degrees(-296.15);//уменьшаем на 296.15

    cout << "Correct: 0" << endl;
    cout << "Ex.1 Temp:  " << deg.Get_degreesK() << endl << endl << endl; //выводим в кельвинах, правильный ответ - 0


    //пример 2 
    deg.Set_degreesK(0);//вводим 0 в Кельвинах

    deg.Add_degrees(10);//прибавляем 10
    cout << "Correct: -449.67    -263.15" << endl;
    cout << "Ex.2 Temp:  " << deg.Get_degreesF() << endl;
    cout << "Ex.2 Temp:  " << deg.Get_degreesС() << endl;  //вывод в Фаренгейтах и Цельсиях

    cout << endl << endl;


    //пример 3
    Temperature mas_deg[3];//массив объектов

    cout << "Examp 3  Correct: 0 2 4" << endl;
    for (int i = 0; i < 3; i++) {
        mas_deg[i].Set_degreesС(i);//заполняем объекты значениями
        mas_deg[i].Add_degrees(i);//добавляем значения к имеющимся
        cout << mas_deg[i].Output() << "    ";  //выводим на экран
    }
    cout << endl << endl << endl;


    //пример 4
    cout << "Examp 4  Correct: 10" << endl;
    //dyn от слова dynamic
    Temperature* dyn_deg{new Temperature};//создание динамического объекта 
    dyn_deg->Set_degreesС(0);   // знак -> равносилен знаку . для статичных объектов
    dyn_deg->Add_degrees(10);
    cout << dyn_deg->Output() << endl;
    cout << endl << endl;
    delete dyn_deg;  //освобождаеи память по окончанию работы


    //пример 5
    cout << "Examp 5  Correct: 4 4 4" << endl;
    Temperature* mas_dyn[3]{ new Temperature };
    for (int i = 0; i < 3; i++) {
        mas_dyn[i]->Set_degreesС(2);
        mas_dyn[i]->Add_degrees(2);
        cout << mas_dyn[i]->Output() << endl;
    }
}

