#ifndef COMPTE_BANCAIRE_HPP
#define COMPTE_BANCAIRE_HPP

class CompteBancaire {

private:

    double solde;
    int codeSecurite;

public:
    // 1. Constructeur sans paramètre
    CompteBancaire();

    // 2. Constructeur avec solde initial
    CompteBancaire(double soldeInitial);

    // Méthode pour afficher le solde
    void afficherSolde() const;

    // Surcharge de la méthode retrait

    // Ver 1 : Retrait avec montant uniquement
    void retrait(double montant);

    // Ver 2 : Retrait avec montant + code de sécurité
    void retrait(double montant, int code);
};

#endif
