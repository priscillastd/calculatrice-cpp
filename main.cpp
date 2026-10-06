#include <iostream>

using namespace std;

int main() {
    double nombre1, nombre2, resultat;
    char operation;

    cout << "=== MA PREMIERE CALCULATRICE C++ ===" << endl;
    
    // 1. Demande des informations à l'utilisateur
    cout << "Entrez le premier nombre : ";
    cin >> nombre1;
    
    cout << "Entrez l'operateur (+, -, *, /) : ";
    cin >> operation;
    
    cout << "Entrez le deuxieme nombre : ";
    cin >> nombre2;

    // 2. Calcul du résultat selon l'opérateur choisi
    if (operation == '+') {
        resultat = nombre1 + nombre2;
        cout << "Resultat : " << resultat << endl;
    } 
    else if (operation == '-') {
        resultat = nombre1 - nombre2;
        cout << "Resultat : " << resultat << endl;
    }
    else {
        cout << "Operateur non reconnu !" << endl;
    }

    return 0;
}
