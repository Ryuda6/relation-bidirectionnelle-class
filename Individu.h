/**
 * @file Individu.h
 * @author Spicka (you@domain.com)
 * @brief relation bidirectionnelle
 * @version 1.0
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

class Individu
{
    // ATTRIBUTS
  public:
  /**
   * @brief le nom de l'individu
   * 
   */
    string nom;

  /**
   * @brief le prenom de l'individu
   * 
   */
    string prenom;

  /**
   * @brief lien avec la voiture de l'individu
   * 
   */
    Voiture *maVoiture;

    // MÉTHODES
  public:
    // Constructeur
    Individu(string = "", string = "");
    // destructeur
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief Retourne l'identité de l'individu
     *
     * @return une chaine sous la forme nom, prenom
     * @bug  un espace en trop entre le nom et le prenom
     */
    string toString();

    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    /**
     * @brief met a jour la voiture
     * 
     * @param voiture 
     */
    void majMaVoiture(Voiture* voiture);
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H