// 3.2.3. With Arguments but Without Return Value (Structure)
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    char branch[30];
    float cgpa;
};
void printStudentDetails(struct Student s[], int count) {
    for (int i = 0; i < count; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name : %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll);
        printf("Branch : %s\n", s[i].branch);
        printf("CGPA : %.2f\n", s[i].cgpa);
    }
}
int main() {
struct Student students[3] = {
    {"Anjali", 101, "CSE", 8.75},
    {"Ravi", 102, "ECE", 8.40},
    {"Meera", 103, "ME", 9.10}
};
printStudentDetails(students, 3);
printf("\nAdvait\tSaxena\n251090580220\nRno:66\n");
return 0;
}