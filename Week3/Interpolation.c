#include <stdio.h>
int a[]={10,20,30,40,50},n=5,key=30;
void f1() {
    int l=0,h=n-1,p;
    while(l<=h) {
        p=l+(key-a[l])*(h-l)/(a[h]-a[l]);
        if(a[p]==key) { printf("1: %d\n",p); return; }
        if(a[p]<key) l=p+1; else h=p-1;
    }
}
void f2(int x) {
    int l=0,h=n-1,p;
    while(l<=h) {
        p=l+(x-a[l])*(h-l)/(a[h]-a[l]);
        if(a[p]==x) { printf("2: %d\n",p); return; }
        if(a[p]<x) l=p+1; else h=p-1;
    }
}
int f3() {
    int l=0,h=n-1,p;
    while(l<=h) {
        p=l+(key-a[l])*(h-l)/(a[h]-a[l]);
        if(a[p]==key) return p;
        if(a[p]<key) l=p+1; else h=p-1;
    }
    return -1;
}
int f4(int x) {
    int l=0,h=n-1,p;
    while(l<=h) {
        p=l+(x-a[l])*(h-l)/(a[h]-a[l]);
        if(a[p]==x) return p;
        if(a[p]<x) l=p+1; else h=p-1;
    }
    return -1;
}
int main() {
    f1();
    f2(30);
    printf("3: %d\n",f3());
    printf("4: %d\n",f4(30));
    return 0;
}
