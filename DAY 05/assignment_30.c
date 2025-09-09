#include <stdio.h>

int main() {
   
    int sub1, sub2, sub3, sub4, sub5;
    int total_marks;
    float average_marks;

    
    printf("Enter marks for five subjects (out of 100):\n");
    printf("Subject 1: ");
    scanf("%d", &sub1);
    printf("Subject 2: ");
    scanf("%d", &sub2);
    printf("Subject 3: ");
    scanf("%d", &sub3);
    printf("Subject 4: ");
    scanf("%d", &sub4);
    printf("Subject 5: ");
    scanf("%d", &sub5);

    total_marks = sub1 + sub2 + sub3 + sub4 + sub5;
    average_marks = (float)total_marks / 5.0;

    printf("\nAverage marks: %.2f\n", average_marks);

   
    if (average_marks >= 90) {
        printf("Grade: O\n");
    } else if (average_marks >= 80) {
        printf("Grade: A+\n");
    } else if (average_marks >= 70) {
        printf("Grade: A\n");
    } else if (average_marks >= 60) {
        printf("Grade: B+\n");
        } else if (average_marks >= 50) {
        printf("Grade: B\n");
        } else if (average_marks >= 40) {
        printf("Grade: C\n");
    } else {
        printf("Grade: FAIL\n");
    }

    return 0;
}