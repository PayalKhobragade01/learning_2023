#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void sortStudents(struct Student* students, int size) {
    struct Student temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void displayStudents(const struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    int size;

    printf("Enter the number of students: ");
    scanf("%d", &size);

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed!");
        return 0;
    }

    printf("\nEnter details of students:\n");

    for (int i = 0; i < size; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollno);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Details (Before Sorting):\n");
    displayStudents(students, size);

    sortStudents(students, size);

    printf("\nStudent Details (After Sorting):\n");
    displayStudents(students, size);

    free(students);

    return 0;
}
