#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

void swapFields(struct Student *stu1, struct Student *stu2) {
    struct Student temp;

    // Swap name fields
    strcpy(temp.name, stu1->name);
    strcpy(stu1->name, stu2->name);
    strcpy(stu2->name, temp.name);

    // Swap age fields
    temp.age = stu1->age;
    stu1->age = stu2->age;
    stu2->age = temp.age;
}

int main() {
    struct Student student1, student2;

    printf("Enter the name of student 1: ");
    scanf("%s", student1.name);

    printf("Enter the age of student 1: ");
    scanf("%d", &student1.age);

    printf("Enter the name of student 2: ");
    scanf("%s", student2.name);

    printf("Enter the age of student 2: ");
    scanf("%d", &student2.age);

    printf("\nBefore swapping:\n");
    printf("Student 1: Name = %s, Age = %d\n", student1.name, student1.age);
    printf("Student 2: Name = %s, Age = %d\n", student2.name, student2.age);

    // Swap fields using pointers
    swapFields(&student1, &student2);

    printf("\nAfter swapping:\n");
    printf("Student 1: Name = %s, Age = %d\n", student1.name, student1.age);
    printf("Student 2: Name = %s, Age = %d\n", student2.name, student2.age);

    return 0;
}
