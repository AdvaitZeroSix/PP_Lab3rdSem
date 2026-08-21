// 0.3.2.2 Passing array of Structures
// to Function and returning Structure from Function
#include <stdio.h>
struct Student{
int roll;
float marks;
};
struct Student* display(struct Student s[]){
    int i;
    for(i = 0; i < 3; i++){
        printf("Roll = %d, Marks = %.2f\n",
        s[i].roll, s[i].marks);
    }
    return s;
}
int main(){
    printf("Advait\tSaxena\n251090580220\nRno:66\n");
    struct Student s[3];
    struct Student *p;
    s[0].roll = 101;
    s[0].marks = 80.5;
    s[1].roll = 102;
    s[1].marks = 85.5;
    s[2].roll = 103;
    s[2].marks = 90.5;
    p = display(s);
    return 0;
}