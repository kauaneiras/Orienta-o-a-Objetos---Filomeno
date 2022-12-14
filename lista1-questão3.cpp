/* Escreva um programa que leia dois números inseridos pelo usuário. O número
 inicial e o número final e mostre todos os números pares no intervalo. Utilize o
 ciclo de repetição while. Ex: inicial=1; final= 12; resultado: 2, 4, 6, 8, 10 e 12. */

#include <iostream>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  int count = a;
  while(count <= b){
    if (count % 2 == 0){
      cout << count << ", ";
  }
  count++;
  }
  
  return 0;
}

