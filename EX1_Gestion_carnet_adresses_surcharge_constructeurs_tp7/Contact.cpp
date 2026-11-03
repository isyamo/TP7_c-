#include "Contact.hpp"
#include <iostream>

using namespace std;

// 1. Constructeur avec nom uniquement (délègue au constructeur complet)
Contact::Contact(string n) : nom(n) {}

// 2. Constructeur avec nom et numéro de téléphone (délègue au constructeur complet)
Contact::Contact(string n, string num) :nom(n) , numero(num){}

// 3. Constructeur complet
Contact::Contact(string n, string num, string email) {
    this->nom = n;
    this->numero = num;
    this->email = email;
}

// Méthode d'affichage
void Contact::afficher() const {
    cout << " Nom du contact : " << nom  << " , Tel : " << numero << " , Email : " << email << endl;
}
