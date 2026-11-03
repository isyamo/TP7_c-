#include "Facture.hpp"

int main() {

    Facture f;

    // Test 1 : Utilise la Ver 1 (Nom, Prix unitaire)
    f.ajouterArticle("Stylo", 5.0);

    // Test 2 : Utilise la Ver 2 (Nom, Prix unitaire, Quantité)
    f.ajouterArticle("Cahier", 10.0, 3);

    // Test 3 : Utilise la Ver 3 (Nom, Prix unitaire, Quantité, TVA)
    f.ajouterArticle("Livre", 50.0, 2, 0.20);

    // Afficher le résultat
    f.afficherTotal();

    return 0;
}
