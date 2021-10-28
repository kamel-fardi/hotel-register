#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonction.h"
void AjouterUnPArticipant(participant liste[]){
        printf("ajout d un nouveau participant\n");

        printf("donnez le nom :\n");
        fflush(stdin);
        gets(liste[n].nom);

        printf("donnez le prenom :\n");
        gets(liste[n].prenom);

        printf("donnez la cin :\n");
        scanf("%d",&liste[n].carte_id);
        Traitement_de_repas(liste);
        Traitement_d_hotel(liste);
        n++;

}
void ChoixRpas(participant liste[],char repas[],int prix)
{
    strcpy(liste[n].repas.type_repas,repas);
    liste[n].repas.prix_repas = prix;
}
void suppr(participant liste[])
{
    int id_supp,perm=0;
        printf("donnez l'cin du participant\n");
        scanf("%d",&id_supp);

        for(i=0;i<n;i++)
        {
            if((liste[i].carte_id==id_supp)||perm==1){
                liste[i]=liste[i+1];
                perm=1;}
        }
        n--;
}
void Traitement_de_repas(participant liste[])
{
    int choix_repas;
    do
        {
            printf("quel est le choix du repas? 1=pas de repas / 2 = dejeuner / 3 = diner / 4 = 2 repas\n");
            scanf("%d",&choix_repas);
        }
        while (choix_repas<1 || choix_repas>4);

        switch(choix_repas)
        {
        case 1:
            {
                ChoixRpas(liste,"pas de repas",0);
                break;
            }
        case 2:
            {

                ChoixRpas(liste,"dejeuner",15);
                break;
            }
        case 3:
            {

                ChoixRpas(liste,"diner",35);
                break;
            }
        case 4:
            {

                ChoixRpas(liste,"2 repas",50);
                break;
            }
        }
}
void Traitement_d_hotel(participant liste[])
{
    int choix_hotel;
    do
        {
            printf("quel est le choix de l'hotel? 1=pas d'hibergement / 2 = hotel 4 etoiles / 3 = hotel 5 etoiles\n");
            scanf("%d",&choix_hotel);
        }
        while (choix_hotel<1 || choix_hotel>3);

        switch(choix_hotel)
        {
        case 1:
                strcpy(liste[n].hotel.type_hotel,"pas d'hibergement");
                liste[n].hotel.prix_hotel=0;
                break;
        case 2:
                strcpy(liste[n].hotel.type_hotel,"hotel 4 etoiles");
                liste[n].hotel.prix_hotel = 75;
                break;

        case 3:
                strcpy(liste[n].hotel.type_hotel,"hotel 5 etoiles");
                liste[n].hotel.prix_hotel = 100;
                break;
        }
}
void affichage(participant liste[])
{
    int choix_affichage;
    do
    {
        printf("comment voulez vous afficher? (1-sans critères / 2- hotels 4 etoiles / 3- hotels 5 etoiles)\n");
        scanf("%d",&choix_affichage);
    }
    while(choix_affichage<1||choix_affichage>3);

    switch(choix_affichage)
    {

    case 1:
        {
            for (i=0;i<n;i++)
            {
                printf("id:%d , participant: %s %s , cin: %d , hotel :%s , repas :%s , facture :%d\n",liste[i].identifiant,liste[i].nom,liste[i].prenom,liste[i].carte_id,liste[i].hotel.type_hotel,liste[i].repas.type_repas,liste[i].facture);
            }
            break;
        }

    case 2:
            for (i=0;i<n;i++)
            {

                if(liste[i].hotel.prix_hotel==75)
                {
                    printf("id:%d , participant: %s %s , cin: %d , hotel :%s , repas :%s , facture :%d\n",liste[i].identifiant,liste[i].nom,liste[i].prenom,liste[i].carte_id,liste[i].hotel.type_hotel,liste[i].repas.type_repas,liste[i].facture);
                }
            }
            break;
    case 3:
            for (i=0;i<n;i++)
            {
                if(liste[i].hotel.prix_hotel==100)
                {
                    printf("id:%d , participant: %s %s , cin: %d , hotel :%s , repas :%s , facture :%d\n",liste[i].identifiant,liste[i].nom,liste[i].prenom,liste[i].carte_id,liste[i].hotel.type_hotel,liste[i].repas.type_repas,liste[i].facture);
                }
            }
            break;
    }
}
void calcule_facture(participant liste[],int cin){
for(int i=0;i<n;i++)
{
    if(liste[i].carte_id==cin)
    {
        liste[i].facture=liste[i].hotel.prix_hotel+liste[i].repas.prix_repas;
        printf("id:%d , participant: %s %s , cin: %d , hotel :%s , repas :%s , facture :%d\n",liste[i].identifiant,liste[i].nom,liste[i].prenom,liste[i].carte_id,liste[i].hotel.type_hotel,liste[i].repas.type_repas,liste[i].facture);
    }
}

}
