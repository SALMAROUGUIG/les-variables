#include<stdio.h>

int main()
{
    int m,i;
    float n[100],s=0;
    printf("Entrer le nombre de Tablau : ");
    scanf("%d",&m);
    printf("Entre les element du teblau : \n");
    for(i=0;i<m;i++){

        printf("Entrer N[%d] = ",i+1);
        scanf("%f",&n[i]);
        s+=n[i];

    } 
    printf("\n");
    printf("La somme est : %.2f\n",s);

    return 0; 

}

