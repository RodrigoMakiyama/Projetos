#include <iostream>
#include "Calculo.h"
using namespace std;

int main()
{
    int operacao;

    double a;
    double b;
    double resultado;
    char op = '+';

    cout << "Calculadora C++\n\n";
    cout << "Operacoes suportadas: '+', '-', '/', '*'.\n\n";
    cout << "Exemplo: a+b\n\n";

    cout << "Insira a sua operacao.\n =>";
    
    Calculo c;
    while (true) {
        cin >> a >> op >> b;
        if (op == '/' && b == 0) {
            cout << "Divisao por zero!" << endl;
            cout << "Insira a sua operacao.\n =>";
            continue;
        }
        else {
        c.Cacular(a, op, b);
        }
    }

    return 0;
}

