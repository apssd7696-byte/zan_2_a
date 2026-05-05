#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << fixed << setprecision(6);
    double rez = pow(4.12 + log(2), 1.0 / 3.0) - sin(0.5) + atan(-0.75);
    cout << "Результат:" << rez << endl;
}
