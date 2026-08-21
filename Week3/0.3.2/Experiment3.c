// 0.3.2.3 Passing Structure Using Pointer and Returning
#include <stdio.h>
struct Student{
    int roll;
    float marks;
};
struct Student* display(struct Student *s){
    printf("Roll = %d\n", s->roll);
    printf("Marks = %.2f\n", s->marks);
    return s;
}
int main(){
    printf("Advait\tSaxena\n251090580220\nRno:66\n");
    struct Student s1;
    struct Student *p;
    s1.roll = 101;
    s1.marks = 85.5;
    p = display(&s1);
    printf("\nReturned Roll = %d", p->roll);
    printf("\nReturned Marks = %.2f", p->marks);
    return 0;
}