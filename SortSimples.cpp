#include <iostream>

void ordenador(int &v1, int &v2, int &v3)
{

    if (v1 > v2)
        std::swap(v1, v2);
    if (v2 > v3)
        std::swap(v2, v3);
    if (v1 > v2)
        std::swap(v1, v2);

}

int main()
{

    int x, y, z;
    std::cin >> x >> y >> z;

    int v1 = x, v2 = y, v3 = z;

    ordenador(v1, v2, v3);

    std::cout << v1 <<"\n" << v2 <<"\n"<< v3 <<"\n"<< "\n"<< x <<"\n"<< y <<"\n"<< z <<std::endl;

    return 0;
}