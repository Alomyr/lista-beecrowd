#include <iostream>

void cedulasContador(int valor)
{
    if (valor <= 0 || valor >= 1000000)
    {
        std::cout << "“Presentation Error”" << std::endl;
    }
    else
    {
        std::cout << valor << std::endl;
        int array[7] = {100, 50, 20, 10, 5, 2, 1};
        int contador;
        for (int i = 0; i < 7; i++)
        {

            contador = valor / array[i];
            std::cout << contador << " nota(s) de R$ " << array[i] << ",00" << std::endl;
            valor -= (contador * array[i]);
        }
    }
}

int main()
{
    int valor;
    std::cin >> valor;
    cedulasContador(valor);
    return 0;
}