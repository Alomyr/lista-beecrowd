#include <iostream>
void Crescimento();
int main()
{
    Crescimento();
    return 0;
}

void Crescimento()
{
    int N;
    std::cin >> N;

    for (int casos = 0; casos < N; casos++)
    {
        int a, b, anos = 0;
        double taxaA, taxaB;
        std::cin >> a >> b >> taxaA >> taxaB;
        while (a <= b && anos <= 100)
        {
            a += a * (taxaA / 100);
            b += b * (taxaB / 100);
            anos++;
        }

        if (anos > 100)
        {
            std::cout << "Mais de 1 seculo." << std::endl;
        }
        else
        {
            std::cout << anos << " anos." << std::endl;
        }
    }
}
