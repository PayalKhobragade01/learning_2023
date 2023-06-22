#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void transformToUpperCase(FILE *source, FILE *destination) {
    int ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(toupper(ch), destination);
    }
}

void transformToLowerCase(FILE *source, FILE *destination) {
    int ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(tolower(ch), destination);
    }
}

void transformToSentenceCase(FILE *source, FILE *destination) {
    int ch;
    int previousChar = '.';
    while ((ch = fgetc(source)) != EOF) {
        if (previousChar == '.' || previousChar == '?' || previousChar == '!') {
            fputc(toupper(ch), destination);
        } else {
            fputc(tolower(ch), destination);
        }
        previousChar = ch;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp [option] sourcefile destinationfile\n");
        return 0;
    }

    char *option = argv[1];
    char *sourceFileName = argv[2];
    char *destinationFileName = argv[3];

    FILE *sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        exit(EXIT_FAILURE);
    }

    FILE *destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        exit(EXIT_FAILURE);
    }

    if (strcmp(option, "-u") == 0) {
        transformToUpperCase(sourceFile, destinationFile);
    } else if (strcmp(option, "-l") == 0) {
        transformToLowerCase(sourceFile, destinationFile);
    } else if (strcmp(option, "-s") == 0) {
        transformToSentenceCase(sourceFile, destinationFile);
    } else {
        int ch;
        while ((ch = fgetc(sourceFile)) != EOF) {
            fputc(ch, destinationFile);
        }
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
