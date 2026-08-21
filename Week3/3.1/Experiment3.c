// 3.1.3. With Arguments but Without Return Value
#include <stdio.h>
void printGrade(int score) {
    if (score >= 90) {
        printf("Grade: A\n");
    }
    else if (score >= 80) {
        printf("Grade: B\n");
    }
    else if (score >= 70) {
        printf("Grade: C\n");
    }
    else {
        printf("Grade: F\n");
    }
}
int main() {
    int studentScore;
    printf("Enter student's score: ");
    scanf("%d", &studentScore);
    printGrade(studentScore);
    printf("Advait\tSaxena\n251090580220\nRno:66\n");
    return 0;
}