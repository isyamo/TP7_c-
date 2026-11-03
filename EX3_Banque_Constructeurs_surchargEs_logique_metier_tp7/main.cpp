#include <iostream>
#include "CompteBancaire.hpp"

using namespace std;

int main() {
    cout << "<<<<  Ouverture sans solde >>>>" << endl;
    CompteBancaire c1;
    c1.afficherSolde();
    c1.retrait(100.0); //  solde insuffisant

    cout << "\n<<<<  Ouverture avec solde initial >>>>" << endl;
    CompteBancaire c2(2000.0);
    c2.afficherSolde();

    cout << "\n<<<<  Retrait avec montant uniquement >>>>" << endl;
    c2.retrait(500.0);
    c2.afficherSolde();

    cout << "\n<<<< Retrait sécurisé montant + mauvais code >>>>" << endl;
    c2.retrait(300.0, 9999); // mauvais code

    cout << "\n <<<<  Retrait sécurisé montant + bon code >>>>" << endl;
    c2.retrait(300.0, 1234); //  bon code
    c2.afficherSolde();

    return 0;
}
