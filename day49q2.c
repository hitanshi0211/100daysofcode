//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int length, i;

    printf("Enter full name: ");
    gets(name);

    length = strlen(name);

    // Print first initial
    if (name[0] != ' ')
        printf("%c. ", toupper(name[0]));

    // Find and print initials until the last word (surname)
    for (i = 1; i < length; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {

            // If this is the last word, print full surname and stop
            if (strchr(name + i + 1, ' ') == NULL) {
                printf("%s", name + i + 1);
                break;
            } 
            else {
                printf("%c. ", toupper(name[i + 1]));
            }
        }
    }

    return 0;
}
