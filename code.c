#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    char type_hotel[20];
    int prix_hotel;
}hotel_strt;



typedef struct
{
    char type_repas[20];
    int prix_repas;
}repas_strt;



typedef struct
{
    char nom[20];
    char prenom[20];
    int identifiant,carte_id,facture;
    repas_strt repas;
    hotel_strt hotel;
}participant;



void main()
{
    int stop_register =0;
    int id=0;
    int choix_repas,choix_hotel,choix_affichage,i,supprimer,id_supp;
    participant liste[100];// allocation d une taille pour le tableau liste


    do
    {
        printf("ajout d un nouveau participant\n");

        printf("donnez le nom :\n");
        fflush(stdin);
        gets(liste[id].nom);

        printf("donnez le prenom :\n");
        gets(liste[id].prenom);

        printf("donnez la cin :\n");
        scanf("%d",&liste[id].carte_id);


        //traitement du repas

        do
        {
            printf("quel est le choix du repas? 1=pas de repas / 2 = déjeuner / 3 = diner / 4 = 2 repas\n");
            scanf("%d",&choix_repas);
        }
        while (choix_repas<1 || choix_repas>4);



        switch(choix_repas)
        {
        case 1:
            {

                strcpy(liste[id].repas.type_repas,"pas de repas");
                liste[id].repas.prix_repas = 0;
                break;
            }
        case 2:
            {

                strcpy(liste[id].repas.type_repas,"dejeuner");
                liste[id].repas.prix_repas = 15;
                break;
            }
        case 3:
            {

                strcpy(liste[id].repas.type_repas,"diner");
                liste[id].repas.prix_repas = 35;
                break;
            }
        case 4:
            {
                printf("test4\n");
                liste[id].repas.prix_repas = 50;
                break;
            }
        }


        //traitement de l hotel

        do
        {
            printf("quel est le choix de l'hotel? 1=pas d'hibergement / 2 = hotel 4 etoiles / 3 = hotel 5 etoiles\n");
            scanf("%d",&choix_hotel);
        }
        while (choix_hotel<1 || choix_hotel>3);

        switch(choix_hotel)

        {

        case 1:
            {

                strcpy(liste[id].hotel.type_hotel,"pas d'hibergement");
                liste[id].hotel.prix_hotel = 0;
                break;
            }
        case 2:
            {
                strcpy(liste[id].hotel.type_hotel,"hotel 4 etoiles");
                liste[id].hotel.prix_hotel = 75;
                break;
            }
        case 3:
            {

                strcpy(liste[id].hotel.type_hotel,"hotel 5 etoiles");
                liste[id].hotel.prix_hotel = 100;
                break;
            }
        }

        liste[id].facture = liste[id].hotel.prix_hotel + liste[id].repas.prix_repas;


        printf("voulez vous ajouter un autre participant?(0 = non / 1 = oui)\n");
        scanf("%d",&stop_register);

        id++;
    }

    while(stop_register);





    ////affichage

    do
    {
        printf("comment voulez vous afficher? (1-sans critères / 2- hotels 4 etoiles / 3- hotels 5 etoiles)\n");
        scanf("%d",&choix_affichage);
    }
    while(choix_affichage<1 || choix_affichage>3);


    switch(choix_affichage)
    {

    case 1:
        {

            for (i=0;i<id;i++)
            {
                printf("id:%d , participant: %s %s , cin: %d , hotel :%s , repas :%s , facture :%d\n",liste[i].identifiant,liste[i].nom,liste[i].prenom,liste[i].carte_id,liste[i].hotel.type_hotel,liste[i].repas.type_repas,liste[i].facture);
            }
            break;
        }

    case 2:
        {

            for (i=0;i<id;i++)
            {

                if(liste[i].hotel.prix_hotel==75)
                {
                    printf("id:%d , participant: %s %s , cin: %d , hotel :%s , repas :%s , facture :%d\n",liste[i].identifiant,liste[i].nom,liste[i].prenom,liste[i].carte_id,liste[i].hotel.type_hotel,liste[i].repas.type_repas,liste[i].facture);
                }
            }
            break;
        }

    case 3:
        {

            for (i=0;i<id;i++)
            {
                if(liste[i].hotel.prix_hotel==100)
                {
                    printf("id:%d , participant: %s %s , cin: %d , hotel :%s , repas :%s , facture :%d\n",liste[i].identifiant,liste[i].nom,liste[i].prenom,liste[i].carte_id,liste[i].hotel.type_hotel,liste[i].repas.type_repas,liste[i].facture);
                }
            }
            break;
        }

    }



    printf("voulez vous supprimer un participant? (0 = oui / 1 = non)");
    scanf("%d",&supprimer);

    if(supprimer==0)
    {
        printf("donnez l'id du participant");
        scanf("%d",&id_supp);

        for(i=id_supp;i<id;i++)
        {
            liste[i]=liste[i+1];
        }
        id--;
    }



}
