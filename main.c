#include <stdio.h>

int rettaPerpendicolare(float m1, float m2);

int main(void) {
        float m1, q1, q2, m2;

        printf("inserisci  m1: ");
        scanf("%f", &m1);
        printf("inserisci  m2: ");
        scanf("%f", &m2);
        printf("inserisci  q1: ");
        scanf("%f", &q1);
        printf("inserisci q2: ");
        scanf("%f", &q2);
        if (rettaPerpendicolare(m1, m2)) {
                printf("Le rette sono perpendicolari tra loro ");
        } else {
                printf("Le rette non sono perpendicolari tra loro ");
        }
}


