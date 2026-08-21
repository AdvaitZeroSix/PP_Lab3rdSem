// 3.2.1. With Arguments but Without Return Value Scenario
#include <stdio.h>
void printMarks(char names[][50], int marks[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d: %s - Marks: %d\n", i + 1, names[i], marks[i]);
    }
}
int main() {
    char names[5][50] = {
        "Aarav",
        "Diya",
        "Karthik",
        "Meera",
        "Rohan"
    };
    int marks[5] = {78, 85, 92, 67, 88};
    printMarks(names, marks, 5);
    printf("Advait\tSaxena\n251090580220\nRno:66\n");
    return 0;
}
