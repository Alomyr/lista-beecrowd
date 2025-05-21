#include <iostream>
#include <cmath>
#include <iomanip>

double x1, x2, y_1, y2;

double calcdistantancia()
{

    double px = x2 - x1;
    double py = y2 - y_1;

    return std::sqrt(std::pow(px, 2) + std::pow(py, 2));
}

int main()
{

    std::cin >> x1 >> y_1 >> x2 >> y2;
    double distancia = calcdistantancia();
    std::cout << std::fixed << std::setprecision(4) << distancia << std::endl;

    return 0;
}