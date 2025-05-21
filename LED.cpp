#include <iostream>
#include <string>
// basta pegar separa os ideices dentro do vetor n precisa ordenalos pega o auxiliar de 0 a 9 e coloca compar o valor do vetor principal e compar o valor do principal com o valor do auxiliar e pega os valores de dentro do auxilia e soma os q passar
void leds();
int main()
{
    leds();
    return 0;
}

void leds()
{
    int N;
    std::cin >> N;
    std::string sequencia;

    for (int casos = 0; casos < N; casos++)
    {
        int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
        std::cin >> sequencia;

        int separador[sequencia.length()];
        int somador = 0;

        for (int i = 0; i < sequencia.length(); i++)
        {
            separador[i] = sequencia[i] - '0';

            if (separador[i] >= 0 && separador[i] <= 9)
            {
                somador += leds[separador[i]];
            }
        }

        std::cout << somador << " leds" << std::endl;
    }
}