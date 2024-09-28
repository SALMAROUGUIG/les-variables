#include<stdio.h>

int main()
{
    int m,i;
    float n[100];
    printf("Entrer le nombre de Tablau : ");
    scanf("%d",&m);
    printf("Entre les element du teblau : \n");
    for(i=0;i<m;i++){

        printf("Entrer N[%d] = ",i+1);
        scanf("%f",&n[i]);

    }
    printf("\n");
    printf("Les element du tablau est : \n");
    for(i=0;i<m;i++){

        printf("%.2f\t",n[i]);

    }

    return 0;

}
