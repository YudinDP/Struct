#include "Tempareture.h"
#include <iostream>
using namespace std;
int main()
{
    double temp, change;
    Temperature deg; //переменная вбстрактного типа

    cout << "input temp: ";
    cin >> temp;

    deg.Set_degrees(temp);

    cout << "input temp change: ";
    cin >> change;

    deg.Change_degrees(change);

    cout << "Temp:  " << deg.Get_degrees();
}

