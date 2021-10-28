#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonction.h"


void main()
{
    int menu=0;
    int supprimer,temp_cin;
    participant liste[100];// allocation d une taille pour le tableau liste
    n=0;
        printf("========================================================================================================================\n");
        printf("===============================================B I E N V E N U E========================================================\n");
        printf("========================================================================================================================\n");
do
{

    do
    {

        printf("1:\tAjouter participant\n2:\tCalculer facture\n3:\tAfficher les informations\n4:\tSupprimer un participant\n0:\tQuitter\nVOTRE CHOIX:");
        scanf("%d",&menu);
        switch(menu)
        {
            case 1://AjouterUnPArticipant(liste,id);
                    AjouterUnPArticipant(liste);
                    break;
            case 2://calcule facture
                    printf("donner cin de participant\n");
                    scanf("%d",&temp_cin);
                    calcule_facture(liste,temp_cin);
                    break;
            case 3:////affichage
                    affichage(liste);
                    break;
            case 4://supprission
                    suppr(liste);
                    break;
        }
        /// calcule facture
        printf("========================================================================================================================\n");
   }

    while(menu<0||menu>4);
}
    while (menu!=0);
        printf("========================================================================================================================\n");
        printf("===============================================AU R E V O I R E========================================================\n");
        printf("========================================================================================================================\n");

}
