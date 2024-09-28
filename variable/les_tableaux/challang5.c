#include<stdio.h>

int main()
{
    int m,i,j;
    float n[100],petit;
    printf("Entrer le nombre de Tablau : ");
    scanf("%d",&m);
    printf("Entre les element du teblau : \n");
    for(i=0;i<m;i++){

        printf("Entrer N[%d] = ",i+1);
        scanf("%f",&n[i]);

    }
    petit=n[0];
    for(i=0;i<m;i++){

        for(j=i+1;j<m;j++){

            if(petit>n[j]){

                petit=n[j];
            }
        }
    }
    printf("\n");
    printf("  Petite element est : %.2f\n",petit);

    return 0;

}
