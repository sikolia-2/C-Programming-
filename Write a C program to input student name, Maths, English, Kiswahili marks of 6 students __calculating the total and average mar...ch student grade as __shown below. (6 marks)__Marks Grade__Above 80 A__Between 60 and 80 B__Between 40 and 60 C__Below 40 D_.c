
#include <stdio.h>

// Define a struct to store student information
struct Student {
    char name[50];
    int maths;
    int english;
    int kiswahili;
    int total;
    float average;
    char grade;
};

int main() {
    struct Student students[6];

    // Input student information
    for (int i = 0; i < 6; i++) {
        printf("Enter student name: ");
        scanf("%s", students[i].name);
        printf("Enter Maths marks: ");
        scanf("%d", &students[i].maths);
        printf("Enter English marks: ");
        scanf("%d", &students[i].english);
        printf("Enter Kiswahili marks: ");
        scanf("%d", &students[i].kiswahili);
        
        // Calculate total marks and average marks
        students[i].total = students[i].maths + students[i].english + students[i].kiswahili;
        students[i].average = students[i].total / 3.0;
        
        // Determine grade
        if (students[i].average > 80) {
            students[i].grade = 'A';
        } else if (students[i].average >= 60 && students[i].average <= 80) {
            students[i].grade = 'B';
        } else if (students[i].average >= 40 && students[i].average < 60) {
            students[i].grade = 'C';
        } else {
            students[i].grade = 'D';
        }
    }

    // Display student information
    printf("\n\nName\tMaths\tEnglish\tKiswahili\tTotal\tAverage\tGrade\n");
    for (int i = 0; i < 6; i++) {
        printf("%s\t%d\t%d\t%d\t\t%d\t%.2f\t%c\n", students[i].name, students[i].maths, students[i].english, students[i].kiswahili, students[i].total, students[i].average, students[i].grade);
    }

    return 0;
}
