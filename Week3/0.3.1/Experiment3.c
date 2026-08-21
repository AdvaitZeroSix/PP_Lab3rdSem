// 0.3.1.3 Passing and Returning String Using Function
#include <stdio.h>
char* getString(){
    return "Advait";
}
int main(){
    char *str;
    str=getString();
    printf("Advait\tSaxena\n251090580220\nRno:66\n");
    printf("String is: %s",str);
}