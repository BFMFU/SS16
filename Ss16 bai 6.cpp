#include <stdio.h>
int found(int arr[], int size, int value);
int main() {
    int array[] = {1, 3, 5, 7, 9, 11};
    int size = sizeof(array) / sizeof(array[0]);
    int foundValue = 7;
    int pos = found(array, size, foundValue);
    if (pos != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri %d\n", foundValue, pos);
    } else {
        printf("Gia tri %d khong ton tai trong mang\n", foundValue);
    }
    return 0;
}
int found(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}
