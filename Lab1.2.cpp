#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int a;
    cout << "Введите номер пары:";
    cin >> a;
    switch (a) {
        case 1:{
            cout << "С 8:30 до 10:05";
            break;}
        case 2:{
            cout << "С 10:15 до 11:50";
            break;}
        case 3:{
            cout << "С 12:00 до 13:35";
            break;}
        case 4:{
            cout << "С 13:50 до 15:25";
            break;}
        case 5:{
            cout << "С 15:40 до 17:15";
            break;}
        case 6:{
            cout << "С 17:25 до 19:00";
            break;}
        case 7:{
            cout << "С 19:10 до 20:45";
            break;}
        default:{
            cout << "Такой пары нет";}
    }
    return 0;
}