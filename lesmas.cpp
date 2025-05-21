#include <iostream>
void lesmas(int array[], int n);
int main()
{
    int n;

    while (std::cin >> n)
    {
        if (n == 0)
            break;

        int array[n];

        lesmas(array, n);
    }
    return 0;
}

void lesmas(int array[], int n)
{

    int aux;
    for (int seepd = 0; seepd < n; seepd++)
    {
        std::cin >> array[seepd];
        if (seepd == 0)
        {
            aux = array[0];
        }
        if (aux <= array[seepd])
        {
            aux = array[seepd];
        }
    }
    if (aux < 10)
    {
        std::cout << "1" << std::endl;
    }
    else if (aux >= 10 && aux < 20)
    {
        std::cout << "2" << std::endl;
    }
    else if (aux >= 20)
    {
        std::cout << "3" << std::endl;
    }
}