## 1. Basic Pointer

```c
#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", (void *)&a);
    printf("Pointer value = %p\n", (void *)p);
    printf("Value using pointer = %d\n", *p);

    return 0;
}
```

## 2. NULL Pointer

```c
#include <stdio.h>

int main() {
    int *p = NULL;

    if (p == NULL)
        printf("Pointer is NULL.\n");
    else
        printf("%d", *p);

    return 0;
}
```

## 3. Wild Pointer

```c
#include <stdio.h>

int main() {
    int *p;  // Uninitialized pointer

    printf("Pointer declared but not initialized.\n");

    return 0;
}
```

## 4. Dangling Pointer

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int));

    *p = 100;
    printf("Value = %d\n", *p);

    free(p);
    p = NULL;  // Prevents dangling pointer

    return 0;
}
```

## 5. Pointer Arithmetic

```c
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;

    for (int i = 0; i < 5; i++)
        printf("%d ", *(p + i));

    return 0;
}
```

## 6. Pointer to Pointer

```c
#include <stdio.h>

int main() {
    int a = 50;
    int *p = &a;
    int **q = &p;

    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%d\n", **q);

    return 0;
}
```

## 7. Void Pointer

```c
#include <stdio.h>

int main() {
    int a = 25;
    void *vp = &a;

    printf("%d\n", *(int *)vp);  // Cast before dereferencing

    return 0;
}
```

## 8. Constant Pointer

```c
#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *const p = &a;

    *p = 50;
    printf("%d\n", *p);

    // p = &b;  // Not allowed

    return 0;
}
```

## 9. Pointer to Constant

```c
#include <stdio.h>

int main() {
    int a = 30;
    int b = 40;
    const int *p = &a;

    p = &b;  // Pointer can be changed

    printf("%d\n", *p);

    return 0;
}
```

## 10. Constant Pointer to Constant

```c
#include <stdio.h>

int main() {
    int a = 100;
    const int *const p = &a;

    printf("%d\n", *p);

    return 0;
}
```

## 11. Function Pointer

```c
#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int main() {
    int (*fp)(int, int);

    fp = add;

    printf("Sum = %d\n", fp(10, 20));

    return 0;
}
```

## 12. Pointer with Dynamic Memory (`malloc`)

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;

    p = malloc(sizeof(int));

    *p = 75;
    printf("%d\n", *p);

    free(p);

    return 0;
}
```

## 13. Array of Pointers

```c
#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int *arr[3];

    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    for (int i = 0; i < 3; i++)
        printf("%d ", *arr[i]);

    return 0;
}
```

## 14. Pointer to Array

```c
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int (*p)[5] = &arr;

    for (int i = 0; i < 5; i++)
        printf("%d ", (*p)[i]);

    return 0;
}
```
