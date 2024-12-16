#include <stdio.h>
void swap(int *a, int *b);
int main() {
    int n1 = 20;
    int n2 = 59;
    printf("Truoc khi hoan doi:\n");
    printf("n1 = %d, n2 = %d\n", n1, n2);
    swap(&n1, &n2);
    printf("Sau khi hoan doi:\n");
    printf("n1 = %d, n2 = %d\n", n1, n2);
    return 0;
}
void swap(int *a, int *b) {
    int temp = *a; 
    *a = *b;     
    *b = temp;
}

