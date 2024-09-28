#include<stdio.h>

int main()
{
    int m,i,j;
    float n[100],gran;
    printf("Entrer le nombre de Tablau : ");
    scanf("%d",&m);
    printf("Entre les element du teblau : \n");
    for(i=0;i<m;i++){

        printf("Entrer N[%d] = ",i+1);
        scanf("%f",&n[i]);

    }
    gran=n[0];
    for(i=0;i<m;i++){

        for(j=i+1;j<m;j++){

            if(gran<n[j]){

                gran=n[j];
            }
        }
    }
    printf("\n");
    printf("  grand element est : %.2f\n",gran);

    return 0;

}
