#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    setlocale(LC_ALL, "");

    std::cout << std::fixed << std::setprecision(6);
    std::cout << "=========== Задание а) ========" << std::endl;

    double expr_a = sqrt(4.12 + log(2)) - sin(0.5) + atan(-3.0 / 4.0);
    std::cout << "sqrt(4.12 + ln2) - sin(1/2) + arctg(-3/4) = " << expr_a << std::endl;
    std::cout << std::endl;

    return 0;
}