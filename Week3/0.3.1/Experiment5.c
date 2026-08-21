// 0.3.1.5. Passing and Returning sentence Using Function
#include<stdio.h>
#include <string.h>
char* getSentence(char str[]){
    return str;
}
int main(){
    printf("Advait\tSaxena\n251090580220\nRno:66\n");
    char sentence[20]="Advait kinda goated";
    printf("The sentence is: %s",getSentence(sentence));
}