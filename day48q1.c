//Check if one string is a rotation of another

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // If lengths are different, they cannot be rotations
    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation.\n");
        return 0;
    }

    // Create a temporary string: str1 + str1
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 exists in temp
    if (strstr(temp, str2) != NULL)
        printf("Yes, the string is a rotation.\n");
    else
        printf("No, the string is not a rotation.\n");

    return 0;
}
