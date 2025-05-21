#include <iostream>

void floresta();

int main()
{
    floresta();
    return 0;
}

void floresta()
{
    char c;
    while (std::cin >> c && c != '*')
    {
        char primeira_letra = ' ';
        bool tautograma = true, primeira_palavra = true;

        while (true)
        {
            if (c != ' ')
            {
                if (c >= 'A' && c <= 'Z')
                    c += 'a' - 'A';

                if (primeira_palavra)
                {
                    primeira_letra = c;
                    primeira_palavra = false;
                }
                else if (c != primeira_letra)
                {
                    tautograma = false;
                }

                while (std::cin.get(c) && c != ' ' && c != '\n')
                    ;
                if (c == '\n')
                    break;
            }
            else
            {
                std::cin.get(c);
            }
        }

        std::cout << (tautograma ? 'Y' : 'N') << std::endl;
    }
}
