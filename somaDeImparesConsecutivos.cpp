#include <iostream>

void impares(int &v1, int &v2)
{
    if (v1 > v2)
        std::swap(v1, v2);
    int somador = 0;
    if (v1 != v2)
    {
        for (int i = v1 + 1; i <= v2 - 1; i++)
        {

            if (i % 2 == 1 || i % 2 == -1)
            {
                // std::cout << i << std::endl;
                somador += i;
            }
        }
        std::cout << somador << std::endl;
    }
    else
    {
        std::cout << 0 << std::endl;
    }
}

int main()
{
    int v1, v2;
    std::cin >> v1 >> v2;

    impares(v1, v2);
    return 0;
}