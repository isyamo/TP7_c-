#include "Facture.hpp"
#include <iostream>

using namespace std;

Facture::Facture() {
    totalGlobal = 0.0;
}

// 1. Juste le nom et le prix
void Facture::ajouterArticle(string nom, double prixUni) {
    totalGlobal += prixUni;
    cout << "Ajouté : " << nom << " (1 x " << prixUni << " DH)" << endl;
}

// 2. Nom, prix et quantité
void Facture::ajouterArticle(string nom, double prixUni, int quantite) {
    double sousTotal = prixUni * quantite;
    totalGlobal += sousTotal;
    cout << "Ajouté : " << nom << " (" << quantite << " x " << prixUni << " DH)" << endl;
}

// 3. Nom, prix, quantité et TVA
void Facture::ajouterArticle(string nom, double prixUni, int quantite, double tva) {
    double sousTotal = (prixUni * quantite) * (1.0 + tva);
    totalGlobal += sousTotal;
    cout << "Ajouté : " << nom << " (" << quantite << " x " << prixUni << " DH + TVA " << (tva * 100) << "%)" << endl;
}

void Facture::afficherTotal() const {

    cout << "TOTAL GENERAL : " << totalGlobal << " DH" << endl;

}
