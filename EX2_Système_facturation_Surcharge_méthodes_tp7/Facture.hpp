#ifndef FACTURE_HPP
#define FACTURE_HPP

#include <string>

class Facture {
private:
    double totalGlobal;

public:
    // Constructeur
    Facture();

    //  methode avec Nom et prix unitaire
    void ajouterArticle(std::string nom, double prixUni);

    // methode avec Nom, prix et quantité
    void ajouterArticle(std::string nom, double prixUni, int quantite);

    // methode avec Nom, prix, quantité et TVA
    void ajouterArticle(std::string nom, double prixUni, int quantite, double tva);

    // Afficher le total
    void afficherTotal() const;
};

#endif
