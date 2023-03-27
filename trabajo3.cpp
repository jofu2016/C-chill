#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{

 double montoCompra, descuento, totalPagar;

    // Solicitamos al usuario que ingrese el monto de la compra
    cout << "Ingrese el monto de la compra: ";
    cin >> montoCompra;

    // Calculamos el descuento con un ciclo if-else
    if (montoCompra < 5000) {
        descuento = 0;
    } else if (montoCompra >= 5000 && montoCompra <= 10000) {
        descuento = 0.05;
    } else if (montoCompra > 10000 && montoCompra <= 70000) {
        descuento = 0.11;
    } else if (montoCompra > 70000 && montoCompra <= 150000) {
        descuento = 0.18;
    } else {
        descuento = 0.25;
    }

    // Calculamos el total a pagar con el descuento aplicado
    totalPagar = montoCompra - (montoCompra * descuento);

    // Mostramos el total a pagar al usuario
    cout << "El total a pagar es: " << totalPagar << " colones" << endl;

	return 0;
}
