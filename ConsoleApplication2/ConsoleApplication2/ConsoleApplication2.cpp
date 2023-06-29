#include <iostream>
int main()
{
    setlocale(LC_ALL, "rus");
    const int n = 5;
    double x[n];
    double y[n];
    std::cout << "Введите данные по x: ";
    for (int i = 0; i < n; i++) {
        std::cin >> x[i];
    }
    std::cout << "Введите данные по y: ";
    for (int i = 0; i < n; i++) {
        std::cin >> y[i];
    }
    double sum_x = 0, sum_y = 0, sum_xy = 0, sum_xx = 0;
    for (int i = 0; i < n; i++) {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_xx += x[i] * x[i];
    }
    std::cout << "Сумма x: " << sum_x << std::endl << "Сумма y: " << sum_y << std::endl << "Сумма x*y: " << sum_xy << std::endl << "Сумма x^2: " << sum_xx << "\n";
    double a = (n * sum_xy - sum_x * sum_y) / (n * sum_xx - sum_x * sum_x);
    double b = (sum_y - a * sum_x) / n;
    std::cout << "\n" << "Результат: " << "\n" << "y = " << a << " * x + " << b << std::endl;
}