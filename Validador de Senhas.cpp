#include <iostream>

void validarSenhas();

int main()
{
    validarSenhas();
    return 0;
}

void validarSenhas()
{
    char senha[1000];
    while (std::cin.getline(senha, 1000))
    {
        bool temMaiuscula = false, temMinuscula = false, temNumero = false, valido = true;
        int tamanho = 0;

        for (int j = 0; senha[j] != '\0'; j++)
        {
            if (senha[j] == ' ')
            {
                valido = false;
                break;
            }
        }

        if (!valido)
        {
            std::cout << "Senha invalida." << std::endl;
            continue;
        }

        for (int j = 0; senha[j] != '\0'; j++)
        {
            tamanho++;
            char c = senha[j];
            if (c >= 'A' && c <= 'Z')
                temMaiuscula = true;
            else if (c >= 'a' && c <= 'z')
                temMinuscula = true;
            else if (c >= '0' && c <= '9')
                temNumero = true;
            else
            {
                valido = false;
                break;
            }
        }

        if (tamanho < 6 || tamanho > 32)
            valido = false;

        if (valido && temMaiuscula && temMinuscula && temNumero)
            std::cout << "Senha valida." << std::endl;
        else
            std::cout << "Senha invalida." << std::endl;
    }
}