#include <iostream>

void contarFrequencia();

int main()
{
    contarFrequencia();
    return 0;
}

void contarFrequencia()
{
    int frequencia[256];
    char c;
    bool primeira_saida = false;

    while (true)
    {
        for (int i = 0; i < 256; i++)
        {
            frequencia[i] = 0;
        }

        bool tem_dados = false;
        while (std::cin >> std::noskipws >> c)
        {
            if (c == '\n')
                break; // Fim da linha
            frequencia[(unsigned char)c]++;
            tem_dados = true;
        }

        if (!tem_dados)
            break;

        int chars[256], freqs[256], total = 0;

        for (int i = 0; i < 256; i++)
        {
            if (frequencia[i] > 0)
            {
                chars[total] = i;
                freqs[total] = frequencia[i];
                total++;
            }
        }

        for (int i = 0; i < total - 1; i++)
        {
            for (int j = 0; j < total - i - 1; j++)
            {
                if (freqs[j] > freqs[j + 1] ||
                    (freqs[j] == freqs[j + 1] && chars[j] < chars[j + 1]))
                {
                    int temp_freq = freqs[j];
                    freqs[j] = freqs[j + 1];
                    freqs[j + 1] = temp_freq;

                    int temp_char = chars[j];
                    chars[j] = chars[j + 1];
                    chars[j + 1] = temp_char;
                }
            }
        }

        if (primeira_saida)
            std::cout << std::endl;
        primeira_saida = true;

        for (int i = 0; i < total; i++)
        {
            std::cout << chars[i] << " " << freqs[i] << std::endl;
        }
    }
}
