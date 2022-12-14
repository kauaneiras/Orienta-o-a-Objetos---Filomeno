 /* 
 Escreva um programa que mostre a seguinte saída:
 1=1
 1+2=3
 1+2+3=6
 1+2+3+4=10
 1+2+3+4+5=15
 */

#include <iostream>
using namespace std;

int main(){
    int n, i, j, soma;
    cout << "Digite um numero: ";
    cin >> n;
    for (i = 1; i <= n; i++ ){
        string s;
        soma = 0;
        for (j = 1; j <= i; j++){
            soma += j;
            if (j == i){
                s += to_string(j) + "=" + to_string(soma);
            }
            else{
                s += to_string(j) + "+";
            }
        }cout << s << endl;
    }

    return 0;  
}
