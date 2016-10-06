#include <iostream>
#include <math.h>
using namespace std;
//Определить значение y при вводе x
int main() {
    //Определяем переменные
    int x;
    double y;
    //Вводим переменную
    cout << "x=";
    cin >> x;
    if (x<=2) cout << "Не входит в ОДЗ"; //Выводим сообщение для x, при которых не существует решения
    else {
        y = (sqrt(pow(x,6)-64)+sqrt(pow(x,5)-32))/(2-x);
        cout << "y=" << y; //Выводим результат
    }
    return 0;
}
