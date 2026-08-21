// 0.3.1.4 Passing and Returning Array Using Function
#include<stdio.h>
int* GetArr(int a[]){
    a[0]=10;
    a[1]=20;
    a[2]=30;
    return a;
}
int main(){
    printf("Advait\tSaxena\n251090580220\nRno:66\n");
    int a[3];
    int *p;
    p=GetArr(a);
    printf("%d %d %d",a[0],a[1],a[2]);
    return 0;
}