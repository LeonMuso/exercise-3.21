#include <stdio.h>

int main(void) {
    int g, m, a;
    printf("inserisci una data: ");
    scanf("%d %d %d", &g, &m, &a);
    switch (m) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
         if ( g >= 1 && g <= 31) {
             printf("la data e' corretta");
         }else {
             printf("la data non e' corretta");
         }
        break;
        case 4:
        case 6:
        case 9:
        case 11:
         if ( g >= 1 && g <= 30) {
             printf("la data e' corretta");
         }else {
             printf("la data non e' corretta");
         }
        break;
        case 2:
            if ( g >= 1 && g <= 28 || a%4 == 0 && a%100 != 0 || a%400 == 0 ) {
                printf("la data e' corretta");
            }else {
                printf("la data non e' corretta");
            }
        break;
        default:
            printf("la data non e' corretta");
    }
    return 0;
}