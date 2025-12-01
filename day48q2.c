
//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    char *start = NULL, *ptr = NULL;

    printf("Enter a sentence: ");
    gets(str);

    ptr = str;

    while (*ptr != '\0') {
        // Mark the beginning of a word
        if (start == NULL && *ptr != ' ')
            start = ptr;

        // If a space or end of string is found, reverse the word
        if ((*ptr == ' ' || *(ptr + 1) == '\0') && start != NULL) {
            if (*(ptr + 1) == '\0')
                reverseWord(start, ptr); 
            else
                reverseWord(start, ptr - 1);

            start = NULL; // reset for next word
        }

        ptr++;
    }

    printf("Output: %s\n", str);

    return 0;
}
