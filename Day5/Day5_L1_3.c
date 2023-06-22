#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateTimeDifference(struct Time startTime, struct Time endTime) {
    struct Time difference;

    // Convert both start and end times to seconds
    int startTimeInSeconds = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;
    int endTimeInSeconds = endTime.hours * 3600 + endTime.minutes * 60 + endTime.seconds;

    // Calculate the absolute difference in seconds
    int diffInSeconds = (endTimeInSeconds > startTimeInSeconds) ? (endTimeInSeconds - startTimeInSeconds) : (startTimeInSeconds - endTimeInSeconds);

    // Convert difference back to hours, minutes, and seconds
    difference.hours = diffInSeconds / 3600;
    difference.minutes = (diffInSeconds % 3600) / 60;
    difference.seconds = (diffInSeconds % 3600) % 60;

    return difference;
}

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    difference = calculateTimeDifference(startTime, endTime);

    printf("The difference between the two time periods is: %d hours, %d minutes, %d seconds\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}
