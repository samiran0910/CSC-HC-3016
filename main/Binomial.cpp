#include <iostream>
using namespace std;

int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}

int binomialCo(int n, int r)
{
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n - r);
    int biCo = nfact / (rfact * nrfact);
    return biCo;
}

int main()
{
    cout << "=====Binomial Coeffecient=====" << endl;
    int n, r;
    cout << "Enter n: " << flush;
    cin >> n;
    cout << "Enter r: " << flush;
    cin >> r;
    int bico = binomialCo(n, r);
    cout << bico << endl;
    return 0;
}