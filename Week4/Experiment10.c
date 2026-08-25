#include <stdio.h>
struct Node {
    int data;
    struct Node *next;
};
void display(struct Node *p) {
    if (p == NULL) return;
    printf("(%d) -> ", p->data);
    display(p->next);
}
int main() {
    struct Node n1 = {10, NULL}, n2 = {25, NULL}, n3 = {30, NULL};
    n1.next = &n2;
    n2.next = &n3;
    display(&n1);
    printf("NULL");
    printf("\nAdvait\tSaxena\n251090580220\nRno:66\n");
    return 0;
}