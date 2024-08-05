#include <stdio.h>

int main(void) {
    char buffer[200];
    
    gets(buffer);

    printf(buffer);
    return 0;
}
