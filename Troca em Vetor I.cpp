#include <iostream>
void trocar(int vetor[], int inicio, int fim);
void inverter(int vetor[], int n);
int main()
{

    int n = 20;
    int vetor[n];
    inverter(vetor, n);

    return 0;
}

void inverter(int vetor[], int n)
{

    int guardar[n];
    for (int i = 0; i <= n - 1; i++)
    {
        std::cin >> guardar[i];
    }

    for (int i = 0; i <= n - 1; i++)
    {
        vetor[i] = guardar[i];
    }
    int inicio = 0, fim = n - 1;
    while (inicio < fim)
    {
        trocar(vetor, inicio, fim);
        inicio++;
        fim--;
    }

    for (int i = 0; i <= n - 1; i++)
    {
        std::cout << "N[" << i << "] = " << vetor[i] << std::endl;
    }
}
void trocar(int vetor[], int inicio, int fim)
{

    int auxiliar = vetor[inicio];
    vetor[inicio] = vetor[fim];
    vetor[fim] = auxiliar;
}
