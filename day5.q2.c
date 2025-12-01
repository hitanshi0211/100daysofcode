#include <stdio.h>

int main() {
    int seconds, hours, minutes, secs;

    // Input seconds from user
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    // Calculate hours, minutes, and seconds
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    secs = seconds % 60;

    // Display result in HH:MM:SS format
    printf("Time: %02d:%02d:%02d\n", hours, minutes, secs);

    return 0;
}
