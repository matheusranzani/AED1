#include <stdio.h>

int main() {
    float P1, P2;
    float PF1, PF2, PF3, PF4;

    printf("P1 e P2: ");
    scanf("%f %f", &P1, &P2);
    printf("PF1, PF2, PF3, PF4: ");
    scanf("%f %f %f %f", &PF1, &PF2, &PF3, &PF4);

    float nota_projeto = PF1 * .2 + PF2 * .2 + PF3 * .3 + PF4 * .3;
    
    float media = ((P1 + P2) / 2) * .5 + nota_projeto * .5;

    printf("Media = %.2f\n", media); 

    return 0;
}