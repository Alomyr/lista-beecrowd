#include <iostream>
#include <cmath>
void movimento()
{
    int x1, y1, x2, y2;

entrada:
    std::cin >> x1 >> y1 >> x2 >> y2;

    if (x1 >= 0 && x1 <= 8 && x2 >= 0 && x2 <= 8 && y1 >= 0 && y1 <= 8 && y2 >= 0 && y2 <= 8)
    {
        do
        {
            if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
                break;

            if (x1 == x2 && y1 == y2)

                std::cout << "0" << std::endl;

            else if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2))
            {
                std::cout << "1" << std::endl;
            }
            else
            {
                std::cout << "2" << std::endl;
            }

            goto entrada;
        } while (true);
    }
    else
    {
        goto entrada;
    }
}

/*void tabuleiro()
{
    // vou ter q usar um while para apenas parar quando for  0 0 0 0
    // para cada teste sair o menor numero de movimentos sempre conta depois da casa q quero chegar
    movimento();

    int tabuleiro[8][8];
    for (int x = 0; x < 8; x++)
    {
        for (int y = 0; y < 8; y++)
        {
            std::cout << tabuleiro[x][y] << std::endl;
        }
    }
}*/

// ia da mais trabalho pro aqui

int main()
{
    // tabuleiro();
    movimento();

    return 0;
}