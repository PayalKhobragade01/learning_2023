#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    char ch;

    printf("Enter the source file name: ");
    scanf("%s", sourceFileName);

    printf("Enter the destination file name: ");
    scanf("%s", destinationFileName);

    // Open the source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        exit(EXIT_FAILURE);
    }

    // Open the destination file in write mode
    destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        exit(EXIT_FAILURE);
    }

    // Copy the contents of source file to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
