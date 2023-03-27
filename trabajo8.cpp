#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{

    int num;
    cout << "Ingrese un numero entero (positivo) : ";
    cin >> num;
    
    cout << num << " ";
    while (num != 1) { 		//Inicia un ciclo while que se repetirá mientras que num no sea igual a 1.
        if (num % 2 == 0) {	 // Comprueba si num es par, es decir, si su resto de la división entre 2 es igual a cero.
            num /= 2;			// Si num es par, se divide por 2 y se actualiza el valor de num.
        } else {
            num = num * 3 + 1;	//Si num es impar, se multiplica por 3 y se suma 1, y se actualiza el valor de num.
        }
        cout << num << " ";
    }
    cout << endl;

    	return 0;
}
