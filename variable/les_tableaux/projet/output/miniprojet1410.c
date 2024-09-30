#include <stdio.h>
#include <string.h> // Pour utiliser strcmp

int main() {
    const int max = 100;
    char titre[max][30];
    char auteur[max][30];
    float prix[max];
    int quantite[max], opt;
    int stock = 0;

    printf(" MENU \n");
    do {
        printf("\nChoisissez une option :\n");
        printf("1 - Ajouter un livre au stock\n");
        printf("2 - Afficher tous les livres disponibles\n");
        printf("3 - Rechercher un livre par son titre\n");
        printf("4 - Mettre à jour la quantité d'un livre\n");
        printf("5 - Supprimer un livre du stock\n");
        printf("6 - Afficher le nombre total de livres en stock\n");
        printf("7 - Quitter\n");
        printf("Option: ");
        scanf("%d", &opt);

        switch(opt) {
            case 1:
                if (stock < max) {
                    printf("Entrer le titre du livre: ");
                    scanf("%s", titre[stock]);

                    printf("Entrer l'auteur du livre: ");
                    scanf("%s", auteur[stock]);

                    printf("Entrer le prix du livre: ");
                    scanf("%f", &prix[stock]);

                    printf("Entrer la quantité en stock: ");
                    scanf("%d", &quantite[stock]);

                    stock++;
                    printf("Livre ajouté avec succès !\n");
                } else {
                    printf("Stock plein, impossible d'ajouter plus de livres.\n");
                }
                break;

            case 2:
                printf("Liste des livres disponibles :\n");
                for (int i = 0; i < stock; i++) {
                    printf("Livre %d:\n", i+1);
                    printf("Titre: %s\n", titre[i]);
                    printf("Auteur: %s\n", auteur[i]);
                    printf("Prix: %.2f\n", prix[i]);
                    printf("Quantité: %d\n\n", quantite[i]);
                }
                break;

            case 3: {
                char recherche[30];
                printf("Entrez le titre du livre à rechercher: ");
                scanf("%s", recherche);

                int found = 0;
                for (int i = 0; i < stock; i++) {
                    if (strcmp(titre[i], recherche) == 0) {
                        printf("Livre trouvé :\n");
                        printf("Titre: %s\n", titre[i]);
                        printf("Auteur: %s\n", auteur[i]);
                        printf("Prix: %.2f\n", prix[i]);
                        printf("Quantité: %d\n", quantite[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Livre non trouvé.\n");
                }
                break;
            }

            case 4: {
                char recherche[30];
                printf("Entrez le titre du livre à mettre à jour: ");
                scanf("%s", recherche);

                int found = 0;
                for (int i = 0; i < stock; i++) {
                    if (strcmp(titre[i], recherche) == 0) {
                        printf("Entrez la nouvelle quantité: ");
                        scanf("%d", &quantite[i]);
                        printf("Quantité mise à jour avec succès !\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Livre non trouvé.\n");
                }
                break;
            }

            case 5: {
                char recherche[30];
                printf("Entrez le titre du livre à supprimer: ");
                scanf("%s", recherche);

                int found = 0;
                for (int i = 0; i < stock; i++) {
                    if (strcmp(titre[i], recherche) == 0) {
                        for (int j = i; j < stock - 1; j++) {
                            strcpy(titre[j], titre[j + 1]);
                            strcpy(auteur[j], auteur[j + 1]);
                            prix[j] = prix[j + 1];
                            quantite[j] = quantite[j + 1];
                        }
                        stock--;
                        printf("Livre supprimé avec succès !\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Livre non trouvé.\n");
                }
                break;
            }

            case 6: {
                int total = 0;
                for (int i = 0; i < stock; i++) {
                    total += quantite[i];
                }
                printf("Nombre total de livres en stock : %d\n", total);
                break;
            }

            case 7:
                printf("Fermeture du programme.\n");
                break;

            default:
                printf("Option invalide, veuillez réessayer.\n");
        }
    } while(opt != 7);

    return 0;
}
