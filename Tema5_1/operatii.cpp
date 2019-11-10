#include <iostream>

int adunare(int a, int b){
    return a + b;
}

int scadere(int a, int b){
    return a - b;
}

int inmultire(int a, int b){
    return a * b;
}

int impartire(int a, int b){
    if (b == 0) {
        std::cout << "Impartirea la 0 invalida\n";
    }
    return a / b;
}

int modulo(int a, int b){
    return a % b;
}
