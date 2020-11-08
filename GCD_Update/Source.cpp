#include<stdio.h>

void swap(int*, int*);

int main() {
    int n[2], tmp, start, x = 0;
    printf("First number : ");
    scanf_s("%d", &n[0]);
    printf("Second number : ");
    scanf_s("%d", &n[1]);
    if (n[0] == 0 || n[1] == 0) printf("ERROR");
    if (n[0] == n[1]) printf("Greatest common divisor = %d", n[0]);
    else {
        if (n[0] > n[1]) {
            swap(&n[0], &n[1]);
        }
        if (n[1] % n[0] == 0)printf("Greatest common divisor = %d", n[0]);
        else {
            while (n[1] % n[0] != 0) {
                start = n[1] % n[0];
                n[1] = n[0];
                n[0] = start;
            }
            printf("Greatest common divisor = %d", start);
        }
    }
    return 0;
}

void swap(int* x, int* y) {
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}