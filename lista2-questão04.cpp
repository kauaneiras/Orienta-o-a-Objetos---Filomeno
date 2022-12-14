/*
Escreva um programa que receba dois números e um operador
aritmético no programa principal e passa-os para uma função. A
função aplica a operação aritmética sobre os dois números com base
no operador digitado pelo usuário. Utilize na função a instrução
switch. 
*/

#include <iostream>
using namespace std;

void calculadora(int n1, int n2, char op);

int main(){
    int n1, n2;
    char op;
    cout << "Digite o primeiro número, depois o segundo número e por fim o operador: " << endl;
    cout << "Exemplo: 1 2 +" << endl;
    cin >> n1 >> n2 >> op;
    calculadora(n1, n2, op);
    return 0;
}

void calculadora(int n1, int n2, char op){
    switch(op){
        case '+':
            cout << n1 + n2 << endl;
            break;
        case '-':
            cout << n1 - n2 << endl;
            break;
        case '*':
            cout << n1 * n2 << endl;
            break;
        case '/':
            cout << n1 / n2 << endl;
            break;
        default:
            cout << "Operador inválido" << endl;
    }
}
