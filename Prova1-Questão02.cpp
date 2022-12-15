/*
Entrada: um inteiro, Ex: 5
Saída: 
1 2 3 4 5 
  1 2 3 4 
    1 2 3 
      1 2 
        1 
*/

#include <iostream>
using namespace std;

int main(){
    int n, i, j;
    cout << "Digite um número inteiro: " << endl;
    cin >> n;
    
     for (i = n; i >= 1; i--){
        for (j = 0; j < n-i; j++){
            cout << "  ";
        }
        for (j = 1; j <= i; j++){
             cout << j << " ";
        }cout << endl;
    
     }
    return 0;
}
