#include <iostream>
using namespace std;

int factorial(int n) {
    // Caso base: el factorial de 0 o 1 es 1
    if (n <= 1) {
        return 1;
    }
    // Llamada recursiva: n * factorial de n-1
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Introduce un numero para calcular su factorial: ";
    cin >> num;

    if (num < 0) {
        cout << "El factorial no esta definido para numeros negativos." << endl;
    } else {
        cout << "El factorial de " << num << " es: " << factorial(num) << endl;
    }

    return 0;
}
