#include <stdio.h>

int main()
{
    int i;
    for(i=0; i<10; i++) {
        if (i%2==1) {
            printf("%d. Hello world \n", i);
        }
    }
    return 0;
}

// %d -> signed decimal integer
// %u -> unsigned decimal integer