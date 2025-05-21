#include <iostream>
#include <iomanip>

void diagonal();
int main()
{

    diagonal();
    return 0;
}

void diagonal()
{

    char escolha;
    double matriz[12][12], soma = 0;
    int i = 0;
    std::cin >> escolha;
    for (int x = 0; x < 12; x++)
    {
        for (int y = 0; y < 12; y++)
        {
            std::cin >> matriz[x][y];
        }
    }
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 12; y++)
        {
            if (y > x && x + y < 11)

            {
                soma += matriz[x][y];
                i++;
            }
        }
    }

    std::cout << std::fixed << std::setprecision(1);

    if (escolha == 'S' || escolha == 's')
    {

        std::cout << soma << std::endl;
    }
    else if (escolha == 'M' || escolha == 'm')
    {

        std::cout << soma / i << std::endl;
    }
}