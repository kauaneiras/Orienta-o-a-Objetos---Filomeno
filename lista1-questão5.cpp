/* 
Escreva um programa que leia um número a partir do teclado digitado pelo
usuário e imprime o digito (algarismo) menos significativo e o digito (algarismo)
menos significativo.
  Ex: Número: 5914.
  O digito mais significativo de 5914 é :9
  O digito menos significativo de 5914 é :1  
*/

#include <iostream>
using namespace std;

int main(){
    int numero, digito1, digito2;
    cout << "Digite um número: ";
    cin >> numero;
    digito1 = numero % 10;
    digito2 = numero % 10;

    while (numero > 10){
        numero = numero / 10;
        if (numero%10 > digito2){
            digito2 = numero%10;
        }
        if (numero%10 < digito1){
            digito1 = numero%10;
        }
    }


    cout << "O digito mais significativo de " << numero << " é: " << digito2 << endl;
    cout << "O digito menos significativo de " << numero << " é: " << digito1 << endl;
    return 0;
    
}
