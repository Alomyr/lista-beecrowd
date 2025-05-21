#include <iostream>

void sequencia();
int main()
{

    sequencia();
    return 0;
}
void sequencia()
{

    int numero1, numero2, soma = 0;

    while (true)
    {
        std::cin >> numero1 >> numero2;
        if (numero1 <= 0 || numero2 <= 0)
        {
            break;
        }
        else if (numero1 > numero2)
        {
            int aux;
            aux = numero1;
            numero1 = numero2;
            numero2 = aux;
        }
        for (int i = numero1; i <= numero2; i++)
        {
            std::cout << i << " ";
            soma += i;
        }
        std::cout << "Sum=" << soma << std::endl;
        soma = 0;
    }
}