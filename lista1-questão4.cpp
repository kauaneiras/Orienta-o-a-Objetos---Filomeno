/* Escreva um programa que determine a soma dos quadrados dos inteiros de 1 a
n. Onde n é um valor positivo inserido pelo usuário.
Ex: Soma=1^2+2^2+3^2+...+n^2.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "digite o número desejado" << endl;
    cin >> n;
    int i;
    int Soma = 0;
    for (i = 0; i <= n; i++)
    {
        Soma += i * i;
    }
    cout << Soma << endl;

    return 0;
}
