#include <stdio.h>

int main() {

    int x = 4;

    int * pX = &x;

    printf("1. %d\n", pX);
    printf("2a. %p\n", *pX);
    printf("2b. %d\n", *pX); // 4 -> want met * volg je de pointer
    printf("3. %p\n", (void *)pX); // met (void *) cast je de int pointer naar een void pointer
    printf("4. %p\n", (void *)&pX);
    printf("5. %p\n", &pX); // 0000003A3C0FFDD8 -> want met & volg je het memory address

    printf("&x  = %p\n", (void *)&x);
    printf("pX  = %p\n", (void *)pX);
    printf("&pX = %p\n", (void *)&pX);

    // &x  = 0000003A3C0FFDD0
    // pX  = 0000003A3C0FFDD0
    // &pX = 0000003A3C0FFDD8

    // de int x staat dus op 0000003A3C0FFDD0
    // pX is de pointer en die wijst dus naar 0000003A3C0FFDD0 en de pointer zelf staat op 0000003A3C0FFDD8 
    // maar als je deze volgt dan wijst hij dus naar 0000003A3C0FFDD0 waar de integer dus staat

    // pX    // het adres waar de pointer naar wijst -> adres van x
    // *pX   // de waarde op dat adres -> waarde van x, dus 4
    // &pX   // het adres van de pointervariabele zelf -> adres van pX zelf




}