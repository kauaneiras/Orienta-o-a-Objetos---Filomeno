// Escreva um programa que leia a partir do teclado uma letra do alfabeto e mostre na tela, se o caractere digitado é uma vogal. 
#include <iostream>
using namespace std;

int main() {
    char letra;
    cout << "Digite uma letra: " << endl;
    cin >> letra;
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << "A letra digitada é uma vogal.";
    } else {
        cout << "A letra digitada não é uma vogal.";
    }
    return 0;
}
