#include <iostream>
#include "Contact.hpp"

using namespace std;

int main() {
    cout << "<<<< TESTER SURCHARGE DE CONSTRUCTEURS >>>>" << endl ;

    // Test 1 : le nom uniquement
    Contact c1("Amine");
    c1.afficher();

    // Test 2 : le nom et le numéro
    Contact c2("Alami", "06 12 34 56 78");
    c2.afficher();

    // Test 3 :  le nom, le numéro et l'email
    Contact c3("Bala", "07 98 76 54 32", "bala.la@email.com");
    c3.afficher();

    return 0;
}
