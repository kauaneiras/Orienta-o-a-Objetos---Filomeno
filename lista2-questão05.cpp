/*
Escreva um programa que mostre um quadro de caracteres usando
uma função. O programa principal receba um número e um caractere,
e passa-os para a função. Por exemplo se o usuário digitar 3 e #, a
função mostra 3 linhas com o símbolo #. 
*/

#include <iostream>
using namespace std;

void printsimb(int n, char c);

int main(){
    int n;
    char c;
    cout << "Digite um número e um caractere: " << endl;
    cout << "Exemplo: 3 # " << endl;
    cin >> n >> c;    
    printsimb(n, c);
    return 0;
}

void printsimb(int n, char c){
    for (int i = 0; i <n ; i++){
        for (int j = 0; j < n; j++){
            cout << c << " ";
        }cout << endl;
    }
}
