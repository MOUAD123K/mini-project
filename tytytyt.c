#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct {

     char titre[50];
     char auteur[50];
     int Quantite;
     float prix;
}livre;


int main()
{
    livre T[50];
    int choix, i , n;
    char a[50];

    do{
            printf("\nMUNE :\n");
            printf("---- \n");
            printf("1.Ajouter un livre au stock.\n");
            printf("2.Afficher tous les livres disponibles.\n");
            printf("3.Rechercher un livre par son titre.\n");
            printf("4.Mettre à jour la quantite d'un livre.\n");
            printf("5.Supprimer un livre du stock.\n");
            printf("Afficher le nombre total de livres en stock.\n");
            printf("---------------------------- \n \n");
            printf("Svp saisi le chiox : ");
            scanf("%d",&choix);

            switch(choix){

   case 1 :
       printf("Combien de livres aimeriez vous ajouter ? \n");
       printf("Ajoute : ");
       scanf("%d",&n);
       for (i=0;i<n;i++){
            printf("---------------------------------\n");
            printf("entrer les detale de livre le num 1 \n");
            printf("--------------------------------- \n");
            printf("le Titre : ");
            scanf(" %[^\n]s",&T[i].titre);
            printf("le auteure : ");
            scanf(" %[^\n]s",&T[i].auteur);
            printf("le Prix : ");
            scanf(" %[^\n]s",&T[i].prix);
            printf("le Quantite : ");
            scanf(" %[^\n]s",&T[i].Quantite);
       }
            printf("-----------------------------------");
            break;

   case 2 :
        printf("-----------------------------------\n");
        printf("les detaile de livre \n");
        scanf("---------------------\n");
        for(i=0;i<n;i++){
            printf("le nom de livre %d \n",i+1);
            printf("le Titre : %s - autuer : %s - Quantite : %s - prix : %s %.2f DH \n ",T[i].titre,T[i].auteur,T[i].prix,T[i].Quantite);
        }
        break;

   case 3 :
        printf("entrer le nom de le auteur : ");
       scanf(" %[^\n]s",&a);
       printf("-----------------------------------\n");
       for(i= 0;i<n;i++){
            if(strcmp(T[i].auteur,a)==0);
            printf("%s t\ %.2f \n",T[i].titre,T[i].prix);
       }
       break;

   case 4 :
       printf("le nombre total de le livre dans la bibliotique est %d \n",n);
        printf("------------------------ \n");
   case 5 :
       if(n>=5)
        printf("desole ! le levre ne exest pa dans la mune ");


   }

    }while(choix != 5);


    return 0;
}
