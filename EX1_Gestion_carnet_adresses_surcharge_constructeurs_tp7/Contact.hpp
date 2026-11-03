#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include<iostream>

class Contact {
private:
    std::string nom;
    std::string numero;
    std::string email;

public:
    // Constructeur avec nom uniquement
    Contact(std::string n);

    // Constructeur avec nom et numéro de téléphone
    Contact(std::string n, std::string num);

    // Constructeur complet : nom, numéro et email
    Contact(std::string n, std::string num, std::string email);

    // Méthode pour afficher les informations du contact
    void afficher() const;
};

#endif
