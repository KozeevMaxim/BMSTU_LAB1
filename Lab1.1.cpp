#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int x;
    double y;
    cout << "x=";
    cin >> x;
    if (x<=2) cout << "Не входит в ОДЗ";
    else {
        y = (sqrt(pow(x,6)-64)+sqrt(pow(x,5)-32))/(2-x);
        cout << "y=" << y;
    }
    return 0;
}
