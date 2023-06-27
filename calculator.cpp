#include <iostream>

using namespace std;

int main()
{
    float a, b;
    char t;
    char p;

    do {
        cout << "Entrez la valeur de A : " << endl;
        cin >> a;

        cout << "Entrez le signe du calcul : " << endl;
        cin >> t;

        cout << "Entrez la valeur de B : " << endl;
        cin >> b;

        if (t == '+') {
            float addition = a + b;
            cout << "Le résultat est de " << addition << endl;
        }
        else if (t == '-') {
            float soustraction = a - b;
            cout << "Le résultat est de " << soustraction << endl;
        }
        else if (t == '/') {
            if (b != 0) {
                float division = a / b;
                cout << "Le résultat est de " << division << endl;
            }
            else {
                cout << "Erreur : division par zéro." << endl;
            }
        }
        else if (t == '*') {
            float multiplication = a * b;
            cout << "Le résultat est de " << multiplication << endl;
        }
        else if (t == '%') {
            float pourcentage = a * b / 100;
            cout << "Le résultat est de " << pourcentage << endl;
        }
        else {
            cout << "Ce signe n'est pas disponible. Essayez le signe '/' pour une division, '*' pour une multiplication, '-' pour une soustraction, '+' pour une addition, et le signe '%' pour un pourcentage." << endl;
        }

        cout << endl;

        cout << "Calculer de nouveau ? (o/n)" << endl;
        cin >> p;
    } while (p != 'n');

    cout << "Arrêt du programme." << endl;

    return 0;
}
