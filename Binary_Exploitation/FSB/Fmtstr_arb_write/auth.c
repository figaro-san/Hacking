#include <stdio.h>

int auth = 0;

int main() {
    char password[100];

    puts("Password: ");
    fgets(password, sizeof password, stdin);
    
    printf(password);
    printf("Auth is %i\n", auth);

    if(auth == 10) {
        puts("Authenticated!");
    }
}
