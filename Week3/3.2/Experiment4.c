// 3.2.4. With Arguments and With Return Value (Structure)
#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
    int rating;
};
struct Employee updateSalary(struct Employee e) {
    if (e.rating == 5)
    e.salary *= 1.20;
    else if (e.rating == 4)
    e.salary *= 1.10;
    return e;
}
int main() {
struct Employee empList[3] = {
    {"Rahul", 1001, 50000.0, 5},
    {"Sneha", 1002, 45000.0, 4},
    {"Arjun", 1003, 40000.0, 3}
};
for (int i = 0; i < 3; i++) {
    struct Employee original = empList[i];
    empList[i] = updateSalary(empList[i]);
    printf("\nEmployee %d:\n", i + 1);
    printf("Name : %s\n", empList[i].name);
    printf("ID : %d\n", empList[i].id);
    printf("Initial Salary : %.2f\n", original.salary);
    printf("Updated Salary : %.2f\n", empList[i].salary);
    printf("Rating : %d\n", empList[i].rating);
}
printf("Advait\tSaxena\n251090580220\nRno:66\n");
return 0;
}