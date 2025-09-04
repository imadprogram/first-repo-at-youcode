#include <stdio.h>
#include <string.h>

int main(){

    char titre[10][10]= {0};
    char auture[10][10]={0};
    int prix[10]={0};
    int quantite[100]={0};
    int choix, i=0, n;
    char string_search[10];
    int count;


    // int size = sizeof(titre) / sizeof(titre[0]);
    here:
    printf("Bienvenu a libririe !\n\n");
    printf("1. Ajouter un livre au stock\n");
    printf("2. Afficher tous les livres disponibles\n");
    printf("3. Rechercher un livre par son titre\n");
    printf("4. Mettre a jour la quantite d'un livre\n");
    printf("5. Supprimer un livre du stock\n");
    printf("6. Afficher le nombre total de livres en stock\n");
    printf("choisir un nombre: ");

    scanf("%d", &choix);

    switch (choix){
    case 1:
        for (i ; i < 10; i++){
            printf("ajouter une livre: ");
            scanf("%s", &titre[i]);
            printf("ajouter nom de auture: ");
            scanf("%s", &auture[i]);
            printf("ajouter une prix: ");
            scanf("%d", &prix[i]);
            printf("ajouter la quantite: ");
            scanf("%d", &quantite[i]);
            i++;
            printf("_________________________\n");
            // printf("%d\n", i);
            goto here;
        }
        
    case 2:
        for (n = 0; n < i; n++){
            printf("\ntitre: %s\n", titre[n]);
            printf("auture: %s\n", auture[n]);
            printf("prix: %d\n", prix[n]);
            printf("quantite: %d\n", quantite[n]);
            printf("_________________________\n");
        }
        goto here;
    
    case 3:
        printf("enter le nom de livre: ");
        scanf("%s", string_search);
        for (int a = 0; a < i; a++){
             if (strcmp(string_search , titre[a]) == 0){
                printf("Trouver le livre !!\n");
                printf("\ntitre: %s\n", titre[a]);
                printf("auture: %s\n", auture[a]);
                printf("prix: %d\n", prix[a]);
                printf("quantite: %d\n", quantite[a]);
                printf("_________________________\n");
            }else{
                printf("%d\n", a);
                printf("\npas de livre !\n");
            }
        }
        goto here;
        
    case 4:
        printf("enter le nom de livre: ");
        scanf("%s", string_search);
        for (int aa = 0; aa < i; aa++){
            if (strcmp(string_search , titre[aa]) == 0){
                printf("Trouver le livre !!\n");
                printf("\ntitre: %s\n", titre[aa]);
                printf("quantite: %d\n", quantite[aa]);
                printf("entre le nouveau quantite: ");
                scanf("%d", &quantite[aa]);
                printf("\nle mise a jour est succes !\n");
                printf("_________________________\n");
                goto here;
            }
        }
    case 5:
        printf("enter le nom de livre: ");
        scanf("%s", string_search);
        for (int a = 0; a < i; a++){
            if (strcmp(string_search , titre[a]) == 0){
                printf("\nTrouver le livre !!\n");
                printf("\ntitre: %s\n", titre[a]);
                strcpy(titre[a], titre[a+1]);
                strcpy(auture[a], auture[a+1]);
                prix[a]= prix[a+1];
                quantite[a]= quantite[a+1];
                count = count - quantite[a];

                i -= 1;
                printf("supprimmer avec succes !!\n\n");

                goto here;
            }
        }
        case 6:
            
            for (int a = 0; a <= i; a++){
                
                count = count + quantite[a];
            }
            printf("Total: %d\n\n",count);
            goto here;
            
    default:
        break;
    }
    return 0;
}
