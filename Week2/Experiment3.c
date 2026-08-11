#include<stdio.h>
#include <stdlib.h>
struct student{
    int rollno;
    char name[50];
    float marks;
};
int main(){
    struct student *students;
    int i,n;
    printf("Enter the number of students you want:");
    scanf("%d",&n);
    students=(struct student *)malloc(n * sizeof(struct student));
    if (n<=0|| students==NULL){
        printf("memory allocation failed.");
        return 0;
    }
    for (i = 0; i < n; i++){
        printf("\nEnter details of Student %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollno);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++){
        printf("\nRoll Number : %d\n", students[i].rollno);
        printf("Name : %s\n", students[i].name);
        printf("Marks : %.2f\n", students[i].marks);
    }
    free(students);
    return 0;
}