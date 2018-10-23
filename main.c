#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*ALGORITHME:CROIX_DE_CARACTERES_POUR

//BUT: afficher une croix de caract�re � partir d'une taille et d'un caract�re entr�s par l'utilisateur.
//PRINCIPE: L'utilisation de deux boucles POUR allant de <valeur> � la taille donn�e par l'utilisateur permet de cr�er un tableau sur lequel on va placer les caract�res selon des �quations.
//Sur ce tableau, on d�finit les axes comme �tant x et y. Lorsque x=y, il est n�cessaire d'afficher un caract�re. Pour le reste des caract�res, on utilisera une �quation faisant le lien entre la
// taille maximum, x et y.
//ENTREES : taille de la croix et caract�re � afficher.
//SORTIES : croix utilisant le caract�re et la taille donn�s.

VAR:
    x,y,taille:ENTIER
    car:CARACTERE

DEBUT:
    ECRIRE "Veuillez entrer un caract�re"
    LIRE car
    ECRIRE "Veuillez entrer la taille de la croix souhait�e"
    LIRE taille
    POUR x DE 1 A taille FAIRE
        POUR y DE 1 A taille FAIRE
            SI (x=y) OU (y=taille-x+1) ALORS
                ECRIRE car
            SINON
                ECRIRE " "
            FINPOUR
        ECRIRE
    FINPOUR
FIN*/
int nLigne=0;
int nColonne=0;
int nTaille=0;
char cChoix=0; //Sera utilis� pour : Le caract�re de la croix et du contour du carr�
char cChoix2=0; //Sera utilis� pour : Le remplissage du carr�

printf("Veuillez entrer un caractere pour votre croix\n");
scanf("%c",&cChoix);
printf("Veuillez la taille de votre croix\n");
scanf("%d",&nTaille);
for (nLigne=1;nLigne<=nTaille;nLigne++){
    for (nColonne=1;nColonne<=nTaille;nColonne++){
        if (nLigne==nColonne || nColonne==nTaille-nLigne+1){
            printf("%c",cChoix);}
        else{
            printf(" ");}}
    printf("\n");}
    fflush(stdin); //Je nettoie sinon il ne me demandera pas le caract�re
printf("Veuillez entrer un caractere pour le contour du carre\n");
scanf("%c",&cChoix);
fflush(stdin);//Encore une fois
printf("Veuillez entrer un caractere pour le remplissage du carre\n");
scanf("%c",&cChoix2);
printf("Veuillez choisir la taille de votre carre\n");
scanf("%d",&nTaille);
for (nLigne=1;nLigne<=nTaille;nLigne++){
    for (nColonne=1;nColonne<=nTaille;nColonne++){
        if (nLigne==1 || nLigne==nTaille || nColonne==1 || nColonne==nTaille){
            printf("%c",cChoix);}
        else{
            printf("%c",cChoix2);}}
    printf("\n");}




}
