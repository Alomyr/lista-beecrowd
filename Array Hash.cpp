#include <iostream>
#include <string>
void arrayH();
int main()
{
    arrayH();
    return 0;
}
void arrayH()
{

    int N;
    std::cin >> N;
    int L;
    std::string sequencia;
    int somadorLetrasTotal = 0;

    for (int casos = 0; casos < N; casos++)
    {
        std::cin >> L;
        for (int linhas = 0; linhas <= L - 1; linhas++)
        {
            std::cin >> sequencia;
            //--------------
            int somadorLetras = 0;
            char alfabeto[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                                 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

            char separador[sequencia.length()];

            for (int i = 0; i < sequencia.length(); i++)
            {
                separador[i] = sequencia[i];
            }

            for (int i = 0; i < sequencia.length(); i++)
            {
                int posicao = separador[i] - 'A';
                if (posicao >= 0 && posicao < 26)
                {
                    somadorLetras += posicao + linhas + i;
                    // std::cout << sequencia[i] << " = " << posicao << std::endl;
                    /// std::cout << "somadorLetras += " << posicao << " + " << linhas << " + " << i << std::endl;
                }
            }

            somadorLetrasTotal += somadorLetras;
            // std::cout << "Somatório da linha " << (linhas + 1) << ": " << somadorLetras << std::endl;
        }
        std::cout << somadorLetrasTotal << std::endl;
        somadorLetrasTotal = 0;
    }
}
