#include "CompteBancaire.hpp"
#include <iostream>

using namespace std;

// 1. Constructeur sans paramètre
CompteBancaire::CompteBancaire() {
    solde = 0.0;
    codeSecurite = 1234; // par défaut
    cout << "Compte ouvert sans solde initial (Solde : 0 DH)." << endl;
}

// 2. Constructeur avec solde initial
CompteBancaire::CompteBancaire(double soldeInitial) {
    if (soldeInitial >= 0) {
        solde = soldeInitial;
    } else {
        solde = 0.0;
        cout << "Solde initial négatif interdit. Solde mis à 0 DH." << endl;
    }
    codeSecurite = 1234;
    cout << "Compte ouvert avec un solde initial de " << solde << " DH." << endl;
}

// Méthode pour afficher le solde
void CompteBancaire::afficherSolde() const {
    cout << "-> Solde actuel : " << solde << " DH" << endl;
}

// Ver 1 : Retrait avec montant uniquement
void CompteBancaire::retrait(double montant) {
    if (montant <= 0) {
        cout << "Erreur : Le montant du retrait doit être positif." << endl;
    } else if (montant > solde) {
        cout << "Erreur : Solde insuffisant pour retirer " << montant << " DH." << endl;
    } else {
        solde -= montant;
        cout << "Retrait de " << montant << " DH effectué avec succès." << endl;
    }
}

// Ver 2 : Retrait avec montant + code de sécurité
void CompteBancaire::retrait(double montant, int code) {
    if (code != codeSecurite) {
        cout << "Sécurité : Code de sécurité incorrect ! Retrait refusé." << endl;
    } else {
        cout << "Code de sécurité validé. ";
        retrait(montant);
    }
}
