#include <stdio.h>

#ifdef _WIN32
void tagged() {
    printf("Windows\n");
}
#elif defined(__linux__)
void tagged() {
    printf("Linux\n");
}
#else
void tagged() {
    printf("Unknown OS\n");
}
#endif

int main() {
    tagged();
    return 0;
}