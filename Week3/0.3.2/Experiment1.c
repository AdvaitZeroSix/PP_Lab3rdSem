// 0.3.2.1 Passing Structure to Function and returning Structure from Function

#include<stdio.h>
#include <stdio.h>
struct Student{
    int roll;
    float marks;
};
struct Student display(struct Student s){
    printf("Roll = %d\n", s.roll);
    printf("Marks = %.2f\n", s.marks);
    return s;
}
int main(){
    printf("Advait\tSaxena\n251090580220\nRno:66\n");
    struct Student s1, s2;
    s1.roll = 66;
    s1.marks = 100.100;
    s2 = display(s1);
    return 0; 
}
