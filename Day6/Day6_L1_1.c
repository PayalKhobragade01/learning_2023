#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseInputString(const char* inputString, struct Student* students, int size) {
    char *token;
    char *rest = strdup(inputString);
    
    for (int i = 0; i < size; i++) {
        token = strtok_r(rest, " ", &rest);
        students[i].rollno = atoi(token);
        
        token = strtok_r(rest, " ", &rest);
        strncpy(students[i].name, token, sizeof(students[i].name));
        
        token = strtok_r(rest, " ", &rest);
        students[i].marks = atof(token);
    }
    
    free(rest);
}

int main() {
    int size;

    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar(); // Consume the newline character left in the input buffer
    
    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));
    
    if (students == NULL) {
        printf("Memory allocation failed!");
        return 0;
    }
    
    char inputString[100];
    printf("Enter the input string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0'; // Remove the newline character
    
    parseInputString(inputString, students, size);

    printf("\nStudent Details:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    free(students);

    return 0;
}
