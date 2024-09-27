#include <stdio.h>
#include <stdlib.h>

int main(){
char nom[20];
char prenom[15];
#include <stdio.h>
#include <stdlib.h>

int main(){
char nom[20];
char prenom[15];
char sexe[10];
char email[40];
int age;
printf("entrer votre nom\n");
scanf("%s",&nom);

printf("entrer votre prenom\n");
scanf("%s",&prenom);
printf("votr nom est prenom %s %s\n",nom,prenom);

printf("entrer votre sexe\n");
scanf("%s",&sexe);
printf("votre sexe est %s",sexe);

printf("entrer votre email\n");
scanf("%s",&email);
printf("votre email est %s",email);

printf("entrer votre age\n");
scanf("%d",&age);
printf("votre age est %d",age);




float nombre ;

printf("veuillez Entrer le nombre ");
scanf("%f",&nombre);

if(nombre< 0)
printf("le nombre est negatif");
else if (nombre> 0)
printf("le nombre est positif");
else 
printf("le nombre est egal à zero");


    return 0;
}


