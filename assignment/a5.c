#include <stdio.h>

// Enum to represent grades
typedef enum {
    GRADE_A,
    GRADE_B,
    GRADE_C,
    GRADE_D,
    GRADE_F
} Grade;

// Array of strings representing grades
const char *gradeStrings[] = {"A", "B", "C", "D", "F"};

// Structure to represent a student
typedef struct {
    char name[50];
    int age;
    Grade grade;
} Student;

int main() {
    // Define a student
    Student student1 = {"Alice", 20, GRADE_B};

    // Display student information
    printf("Student Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Grade: %s\n", gradeStrings[student1.grade]);

    return 0;
}
