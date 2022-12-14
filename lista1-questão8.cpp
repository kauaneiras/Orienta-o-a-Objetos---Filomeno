/*
Suponha que se deseja gerar uma tabela de múltiplos de qualquer número.
Escreva um programa que permita ao usuário digitar o número e, em seguida,
gere a tabela, formatando-a em 10 colunas e 20 linhas. A interação com o
programa deve ficar restrita apenas as três primeiras linhas mostradas: 
*/

#include <iostream>
using namespace std;

int main(){
    int num, i, j, mult=0;
    cout << "Digite um numero: ";
    cin >> num;
    for (j = 1; j <= 20; j++){
        for (i = 1; i <= 10; i++){
            if (mult < 10){
                cout << "     ";
            }
            else if (mult < 100){
                cout << "    ";
            }
            else if (mult < 1000){
                cout << "   ";
            }
            else if (mult < 10000){
                cout << "  ";
            }
            mult += 5;
            cout << mult;
        }cout << endl;  
    }
    return 0;  
}
