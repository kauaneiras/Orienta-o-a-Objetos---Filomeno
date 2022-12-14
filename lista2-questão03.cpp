/*
Escreva um programa que receba um número no programa principal e
mostre os números predecessor e sucessor mediante uma função. 
*/

#include <iostream>
using namespace std;

void precessoreantecessor(int n);

int main(){
    int n;
    cout << "Digite um número: ";
    cin >> n;
    precessoreantecessor(n);
    return 0;
}

void precessoreantecessor(int n){
    cout << "O predecessor de " << n << " é " << n-1 << endl;
    cout << "O sucessor de " << n << " é " << n+1 << endl;
}
