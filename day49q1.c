//Print the initials of a name.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter your full name: ");
    gets(name);

    // Print first character as the first initial
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Check for spaces and print the next character after space
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c", name[i + 1]);
        }
    }

    return 0;
}
