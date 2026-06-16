#include <stdio.h>
#include <string.h>

int validate_key(char *key) {
    if (strcmp(key, "CYBER-1337-KEY") == 0) {
        return 1;
    }
    return 0;
}

int main() {
    char input[64];

    printf("Enter license key: ");
    scanf("%63s", input);

    if (validate_key(input)) {
        printf("Access Granted\n");
    } else {
        printf("Access Denied\n");
    }
    return 0;
}