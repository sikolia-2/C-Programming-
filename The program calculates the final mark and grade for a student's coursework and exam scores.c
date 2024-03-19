#include <stdio.h>

int main() {
    int coursework, exam;
    
    // Prompt user to enter coursework and exam marks
    printf("Enter coursework marks: ");
    scanf("%d", &coursework);
    
    printf("Enter exam marks: ");
    scanf("%d", &exam);
    
    // Check for technical fail if either component is below 15
    if(coursework < 15 || exam < 15) {
        printf("Technical fail as one of the components is below 15 marks.\n");
        return 0;
    }
    
    // Calculate total marks
    int total = coursework + exam;
    
    // Apply moderation rule if total is between 39 and 40
    if(total >= 39 && total < 40) {
        total = 40;
    }
    
    // Determine grade based on total marks
    char grade;
    if(total >= 70) grade = 'A';
    else if(total >= 60&& total <=69) grade = 'B';
    else if(total >= 50&& total <=59) grade = 'C';
    else if(total >= 40&& total <=49) grade = 'D';
    else grade = 'F';

    printf("Final Marks: %d\nGrade: %c\n", total, grade);

    return 0;
}
    