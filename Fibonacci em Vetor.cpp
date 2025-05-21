#include <iostream>
void fibonacci(int array[], int n);
int main()
{
    int n;
    std::cin >> n;
    int array[n];
    for (int i = 0; i <= n - 1; i++)
    {
        std::cin >> array[i];
    }
    fibonacci(array, n);

    return 0;
}

void fibonacci(int array[], int n)
{
    // array[n];
    long fib[101];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= 100; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << "Fib(" << array[i] << ") = " << fib[array[i]] << std::endl;
    }
}