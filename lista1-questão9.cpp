/*
Escreva um programa de conversão da temperatura, que dê ao usuário a opção
de converter a temperatura de Fahrenheit para Celsius ou de Celsius para
Fahrenheit. Em seguida faça a conversão. Utilize números reais. A interação
com o programa pode ser assim:
Fahrenheit= 9,0/5,0 *Celsius+32 

Digite 1 para transformar de Fahrenheit para Celsius
Digite 2 para transformar de Celsius para Fahrenheit
*/

#include <iostream>
using namespace std;

int main(){
    int num, i, j;
    float temp, fah, cel;
    cout << "1 - Fahrenheit para Celsius" << endl;
    cout << "2 - Celsius para Fahrenheit" << endl;
    cin >> num;

    switch(num){
        case 1:
            cout << "Digite a temperatura em Fahrenheit: ";
            cin >> temp; 
            cel = (temp - 32) * 5/9;
            cout << "A temperatura em Celsius é de : " << cel << "°C" << endl;
            break;
        case 2:
            cout << "Digite a temperatura em Celsius: ";
            cin >> temp;
            fah = (temp * 9/5) + 32;
            cout << "A temperatura em Fahrenheit é de : " << fah << "°F" << endl;
            break;
    }

    return 0;  
}


