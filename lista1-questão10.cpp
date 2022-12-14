/*
Crie o equivalente a uma calculadora de quatro funções. O programa deve
solicitar que o usuário insira um número, um operador e outro número (use
número real). Deve então realizar a operação aritmética especificada: somar,
subtrair, multiplicar ou dividir os dois números. Utilize uma instrução switch
para selecionar a operação. Por fim, exiba o resultado. Ao finalizar o cálculo, o
programa deve perguntar se ao usuário deseja fazer outro cálculo. A resposta
pode ser ‘S’ ou ‘N’. Alguns exemplos de interação com o programa podem ser
assim: 1 * 4 = 4,000
 Quer efetuar outra operação (‘S’ ou ‘N’)?
 S
 2 + 5 =7,000
 Quer efetuar outra operação (‘S’ ou ‘N’)?
 N 
*/

#include <iostream>
using namespace std;

int main(){
    string again = "S";
    int num1, num2, op;
    double result;

    while (again == "S"){
        cout << "Digite o primeiro número da operação: " <<endl;
        cin >> num1;
        cout << "Escolha: 1 - Soma, 2 - Subtração, 3 - Multiplicação, 4 - Divisão" <<endl;
        cin >> op;
        cout << "Digite o segundo número da operação: " <<endl;
        cin >> num2;

        switch(op){
            case 1:
                result = num1 + num2;
                break;
            case 2:
                result = num1 - num2;
                break;
            case 3:
                result = num1 * num2;
                break;
            case 4:
                result = num1 / num2;
                break;
            default:
                cout << "Operação inválida" <<endl;
                break;
        }
        cout << "O resultado da operação é: " << result <<endl;
        cout << "Deseja fazer outra operação? (S/N)" <<endl;
        cin >> again;
    }
    cout << "Fim do programa" <<endl;  

    return 0;  
}


