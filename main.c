#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int de1=0,de2=0;
    srand(time(NULL)); //initialise la génération des nombres aléatoires
    de1=rand()%6+1;
    de2=rand()%6+1;
    printf("de1=%d de2=%d\n",de1,de2);
    if(de1+de2==7||de1+de2==11)
    {
        printf("Player wins");
    }
    else
    {
        printf("Merci d'avoir joué\n");
        printf("la somme des dés est de %d",de1+de2);
    }

    return 0;
}
