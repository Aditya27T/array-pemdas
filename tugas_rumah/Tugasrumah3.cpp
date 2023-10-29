#include <iostream>
using namespace std;

// bool isPrime(int n)
// {
//     if (n <= 1)
//     {
//         return false;
//     }
//     for (int i = 2; i <= n / 2; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

int main()
{
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

    int fib[n];
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << "Bilangan Fibonacci ke-" << n << " adalah " << fib[n - 1] << endl;

    if (fib[n - 1] % 2 == 0)
    {
        cout << "Bilangan Fibonacci ke-" << n << " adalah bilangan genap" << endl;
    }
    else
    {
        cout << "Bilangan Fibonacci ke-" << n << " adalah bilangan ganjil" << endl;
    }

    cout << "Deret bilangan fibonacci: ";
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << " ";
    }

    return 0;
}
