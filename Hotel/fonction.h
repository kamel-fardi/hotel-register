#ifndef FONCTION
#define FONCTION
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

int i,n;
void AjouterUnPArticipant(participant liste[100]);
void ChoixRpas(participant liste[],char repas[],int prix);
void suppr(participant liste[]);
void Traitement_de_repas(participant liste[]);
void Traitement_d_hotel(participant liste[]);
void affichage(participant liste[]);
void calcule_facture(participant liste[],int temp_cin);


#endif // FONCTION
