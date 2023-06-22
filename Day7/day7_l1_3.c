#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

struct LogEntry {
    int entryNo;
    char sensorNo[3];
    float temperature;
    int humidity;
    int light;
    char time[9];
};

void readDataFromFile(const char* fileName, struct LogEntry* logEntries, int* numEntries) {
    FILE* file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        exit(EXIT_FAILURE);
    }

    char line[100];
    int count = 0;

    // Skip the header line
    fgets(line, sizeof(line), file);

    while (fgets(line, sizeof(line), file) != NULL) {
        struct LogEntry entry;

        sscanf(line, "%d,%[^,],%f,%d,%d,%[^,\n]", &entry.entryNo, entry.sensorNo, &entry.temperature,
               &entry.humidity, &entry.light, entry.time);

        logEntries[count] = entry;
        count++;

        if (count >= MAX_ENTRIES) {
            printf("Maximum number of entries reached.\n");
            break;
        }
    }

    *numEntries = count;

    fclose(file);
}

void displayLogEntries(const struct LogEntry* logEntries, int numEntries) {
    printf("Log Entries:\n");
    printf("----------\n");
    printf("EntryNo\t| SensorNo\t| Temperature\t| Humidity\t| Light\t| Time\n");
    printf("------------\n");

    for (int i = 0; i < numEntries; i++) {
        printf("%d\t| %s\t\t| %.2f\t\t| %d\t\t| %d\t| %s\n", logEntries[i].entryNo, logEntries[i].sensorNo,
               logEntries[i].temperature, logEntries[i].humidity, logEntries[i].light, logEntries[i].time);
    }

    printf("------------------\n");
}

int main() {
    struct LogEntry logEntries[MAX_ENTRIES];
    int numEntries = 0;

    readDataFromFile("data.csv", logEntries, &numEntries);
    displayLogEntries(logEntries, numEntries);

    return 0;
}

//b.Also implement functions to display the contents of the array of structures.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

struct LogEntry {
    int entryNo;
    char sensorNo[3];
    float temperature;
    int humidity;
    int light;
    char time[9];
};

void displayLog(const struct LogEntry* logEntries, int size) {
    printf("Log Entries:\n");
    printf("--------------------------------------------------------\n");
    printf("EntryNo   SensorNo   Temperature   Humidity   Light   Time\n");
    printf("--------------------------------------------------------\n");

    for (int i = 0; i < size; i++) {
        printf("%-9d %-10s %-13.1f %-10d %-7d %s\n",
               logEntries[i].entryNo, logEntries[i].sensorNo,
               logEntries[i].temperature, logEntries[i].humidity,
               logEntries[i].light, logEntries[i].time);
    }

    printf("--------------------------------------------------------\n");
}

int main() {
    FILE* file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Unable to open the data file.\n");
        exit(EXIT_FAILURE);
    }

    struct LogEntry logEntries[MAX_ENTRIES];
    int size = 0;

    char line[100];
    fgets(line, sizeof(line), file);  // Skip the header line

    while (fgets(line, sizeof(line), file) != NULL) {
        char* token = strtok(line, ",");
        logEntries[size].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strncpy(logEntries[size].sensorNo, token, sizeof(logEntries[size].sensorNo));

        token = strtok(NULL, ",");
        logEntries[size].temperature = atof(token);

        token = strtok(NULL, ",");
        logEntries[size].humidity = atoi(token);

        token = strtok(NULL, ",");
        logEntries[size].light = atoi(token);

        token = strtok(NULL, ",");
        strncpy(logEntries[size].time, token, sizeof(logEntries[size].time));

        size++;
    }

    fclose(file);

    displayLog(logEntries, size);

    return 0;
}
