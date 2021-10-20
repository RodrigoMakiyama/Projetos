#include "Calculo.h"
#include <iostream>
using namespace std;


double Calculo::Cacular(double a, char op, double b)
{
	switch (op)
	{
	case '+':
		cout << "Resultado: \n" << a << " + " << b << " = " << a + b << endl;
		cout << "Insira a sua operacao.\n =>";
		break;
	case '-':
		cout << "Resultado: \n" << a << " - " << b << " = " << a - b << endl;
		cout << "Insira a sua operacao.\n =>";
		break;
	case '/':
		cout << "Resultado: \n" << a << " / " << b << " = " << a / b << endl;
		cout << "Insira a sua operacao.\n =>";
		break;
	case  '*':
		cout << "Resultado: \n" << a << " * " << b << " = " << a * b << endl;
		cout << "Insira a sua operacao.\n =>";
		break;
		return 0;
	default:
		cout << "Operacao invalida!\n";
		cout << "Insira uma das operacoes suportadas: '+', '-', '/', '*'.\n=>";
		break;
	}
}
