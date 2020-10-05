#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int de1,de2;
    srand(time(NULL));
    de1=(rand()%6)+1;
    de2=(rand()%6)+1;
    if(de1+de2==7||de1+de2==11)
    {
        printf("Vous avez gagné");
    }
    else
    {
        printf("La somme des dés est de %d\n",+de1+de2);
        printf("Merci d'avoir joué\n");
    }
    return 0;
}
