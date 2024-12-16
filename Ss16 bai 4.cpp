#include <stdio.h>
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu %d: %d\n", i, *(arr + i));
    }
}
int main() {
    int arr[] = {8, 1, 4, 92, 0};
    int length=sizeof(arr)/sizeof(arr[0]); 
    printf("Cac phan tu trong mang:\n");
    printArray(arr, length);
    return 0;
}

