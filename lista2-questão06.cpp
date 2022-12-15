/*
Elabore um programa que use um função mult(int , int) para
determinar para um par de inteiros se o segundo inteiro é múltiplo do
primeiro. A função deve receber os dois inteiros como argumento e
retornar 1 (verdadeiro) se o segundo inteiro é múltiplo do primeiro e
0 (falso) caso contrário. O programa deve solicitar como entrada
o par de inteiros. 
*/

#include <iostream>
using namespace std;

int mult(int n1, int n2);

int main(){
    int n1, n2;
    cout << "Digite dois números inteiros " << endl;
    cin >> n1 >> n2;    
    int res = mult(n1, n2);
    if(res == 1){
        cout << "O segundo número é múltiplo do primeiro" << endl;
    }else{
        cout << "O segundo número não é múltiplo do primeiro" << endl;
    }
    return 0;
}

int mult(int n1, int n2){
    int res;
    if(n2 % n1 == 0){
        res = 1;
    }else{
        res = 0;
    }
    return res;
}
