#include <iostream>
#include "operatii.h"

using namespace std;

enum operatiiMate {Adunare = 1, Scadere, Inmultire, Impartire, Modulo};
void meniu(){
    cout << "Introdu operatia pe care vrei sa o aplici:\n";
    cout << "1 Adunare\n2 Scadere\n3 Inmultire\n4 Impartire\n5 Modulo\n";
}

int main()
{
    meniu();
    short n, x, y;
    cin >> n;
    while ((n < 1) || (n > 5)) {
        cout << "Eroare, optiune incorecta, alegeti din nou: ";
        cin >> n;
    }
    cout << "Introdu primul numar intreg: "; cin >> x;
    cout << "Introdu al doilea numar intreg: "; cin >> y;

    switch (n) {
    case Adunare: cout << x << " + " << y << " = " << adunare(x, y); break;
    case Scadere: cout << x << " - " << y << " = " << scadere(x, y); break;
    case Inmultire: cout << x << " * " << y << " = " << inmultire(x, y); break;
    case Impartire:
        while(y == 0) {
            cout<<"Impartirea la 0 nu e posibila, va rog introduceti un nou al doilea numar: ";
            cin>>y;}
        cout << x << " / " << y << " = " << impartire(x, y); break;
    case Modulo:
        while(y == 0) {
            cout<<"Impartirea la 0 nu e posibila, va rog introduceti un nou al doilea numar: ";
            cin>>y;}
        cout << x << " % " << y << " = " << modulo(x, y); break;
    }
    cout << endl;

    return 0;
}
