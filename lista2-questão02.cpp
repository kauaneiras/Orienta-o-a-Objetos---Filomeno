/*
Escreva um programa que receba um número no programa principal e
passe o número para uma função. A função mostra a tabela desse
número.
Exemplo:
Digite um número: 4
4 * 1 = 4
4 * 2 = 8
4 * 3 = 12
4 * 4 = 16
4 * 5 = 20
4 * 6 = 24
.
.
 4 * 10 = 40 
*/

#include <iostream>
using namespace std;

void tabuada(int n){
    for(int i = 1; i <= 10; i++){
        cout << n << " * " << i << " = " << n * i << endl;
    }
}

int main(){
    int n;
    cout << "Digite um número: ";
    cin >> n;
    tabuada(n);
    return 0;
}
