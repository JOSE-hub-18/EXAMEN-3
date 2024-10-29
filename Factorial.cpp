#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

void cajeroAutomatico() {
    int saldo = 20000;
    int opcion, retiro;

    do {
        cout << "\n--- Cajero Automatico ---\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Retirar efectivo\n";
        cout << "3. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Saldo actual: $" << saldo << endl;
                break;
            case 2:
                cout << "Monto a retirar: $";
                cin >> retiro;
                if (retiro > saldo) {
                    cout << "Fondos insuficientes.\n";
                } else {
                    saldo -= retiro;
                    cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
                }
                break;
            case 3:
                cout << "Saliendo del cajero.\n";
                break;
            default:
                cout << "Opción no valida.\n";
        }
    } while (opcion != 3);
}

int main() {
    int opcion, num;

    cout << "--- Menu Principal ---\n";
    cout << "1. Calcular Factorial\n";
    cout << "2. Usar Cajero Automatico\n";
    cout << "Elige una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Introduce un numero para calcular su factorial: ";
            cin >> num;
            cout << "El factorial de " << num << " es: " << factorial(num) << endl;
            break;
        case 2:
            cajeroAutomatico();
            break;
        default:
            cout << "Opción no valida.\n";
    }

    return 0;
}
