#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

bool sonIguales(Pila<int>, Pila<int>);

int main() {
    Pila<int> pri, seg;
    int n;

    n = 0;
    cout << "Ingrese primera pila): " << endl;
    while (n != -1) {
        cin >> n;
        pri.push(n);
    }

    n = 0;
    cout << endl << "Ingrese segunda pila): " << endl;
    while (n != -1) {
        cin >> n;
        seg.push(n);
    }

    if (sonIguales(pri, seg)) {
        cout << endl << "Son iguales";
    } else {
        cout << endl << "No son iguales";
    }

    return 0;
}

bool sonIguales(Pila<int> pri, Pila<int> seg) {
    while (true) {
        if (pri.esVacia() && seg.esVacia())return true;
        if ((pri.esVacia() && !seg.esVacia()) || (seg.esVacia() && !pri.esVacia()))return false;
        if (pri.pop() != seg.pop())return false;
    }
}