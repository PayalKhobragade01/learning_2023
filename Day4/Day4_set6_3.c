#include <stdio.h>
#include <stdlib.h>

int computeTotalSeconds(const char *timeString) {
    int hours, minutes, seconds;
    sscanf(timeString, "%d:%d:%d", &hours, &minutes, &seconds);

    int totalSeconds = hours * 3600 + minutes * 60 + seconds;
    return totalSeconds;
}

int main() {
    char timeString[9];

    printf("Enter the time in the format hh:mm:ss: ");
    scanf("%8s", timeString);

    int totalSeconds = computeTotalSeconds(timeString);
    printf("Total seconds: %d\n", totalSeconds);

    return 0;
}