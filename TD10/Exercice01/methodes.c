#include <stdio.h>
#include <stdlib.h>
#include "protos.h"

void creerOuvrage(ouvrage *o, char titre[20], char auteur[20], int annee) {
    o->titre = titre;
    o->auteur = auteur;
    o->annee = annee;
    o->nbEmprunts = 0;
}

int anneeOuvrage(ouvrage o) {
    return o.annee;
}

char * titreOuvrage(ouvrage o) {
    return o.titre;
}

char * auteurOuvrage(ouvrage o) {
    return o.auteur;
}

int nbEmpruntsOuvrage(ouvrage o) {
    return o.nbEmprunts;
}

void modifAnneeOuvrage(ouvrage *o, int annee) {
    o->annee = annee;
}

void modifTitreOuvrage(ouvrage *o, char titre[20]) {
    o->titre = titre;
}

void modifAuteurOuvrage(ouvrage *o, char auteur[20]) {
    o->auteur = auteur;
}

void ajouterEmprunt(ouvrage *o){
    o->nbEmprunts++;
}

void affOuvrage(ouvrage o) {
    printf("Titre : %s\n", o.titre);
    printf("Auteur : %s\n", o.auteur);
    printf("Annee : %d\n", o.annee);
    printf("Nombre d'emprunts : %d\n", o.nbEmprunts);
}

void ouvragePlusEmprunte(ouvrage t[],int taille, ouvrage *res, int *tailleRes){
    int max = 0;
    for (int i = 0; i < taille; i++)
    {
        if (t[i].nbEmprunts > max)
        {
            max = t[i].nbEmprunts;
            *res = t[i];
        }
    }
    *tailleRes = 1;
}