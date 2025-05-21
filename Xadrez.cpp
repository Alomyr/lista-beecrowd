#include <iostream>

void tabuleiro()
{

    int linha, coluna;
    std::cin >> linha >> coluna;
    int cor = (linha + coluna) % 2;
    if (cor == 1)
    {
        std::cout << "0" << std::endl;
    }
    else
    {
        std::cout << "1" << std::endl;
    }
}

int main()
{

    tabuleiro();

    return 0;
}