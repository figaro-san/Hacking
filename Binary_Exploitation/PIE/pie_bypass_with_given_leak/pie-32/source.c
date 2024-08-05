// gcc source.c -o vuln-32 -fno-stack-protector -z noexecstack -m32
// gcc source.c -o vuln-64 -fno-stack-protector -z noexecstack

#include <stdio.h>

int main() {
    vuln();

    return 0;
}

void vuln() {
    char buffer[20];

    printf("Main Function is at: %lp\n", main);

    gets(buffer);
}

void win() {
    puts("PIE bypassed! Great job :D");
}