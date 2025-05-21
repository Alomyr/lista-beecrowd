#include <iostream>
#include <iomanip>

int main()
{
    char escolha;
    double matriz[12][12], soma = 0;
    int contador = 0;

    std::cin >> escolha;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            std::cin >> matriz[i][j];
        }
    }

    for (int i = 1; i < 12; i++)
    {
        for (int j = 12 - i; j < 12; j++)
        {
            soma += matriz[i][j];
            contador++;
        }
    }

    std::cout << std::fixed << std::setprecision(1);

    if (escolha == 'S')
    {
        std::cout << soma << std::endl;
    }
    else if (escolha == 'M')
    {
        std::cout << soma / contador << std::endl;
    }

    return 0;
}
