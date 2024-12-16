#include <stdio.h>
void update(int arr[], int size, int pos, int value);
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Mang ban dau: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int posUpdate = 2;
    int newValue = 10;
    update(arr, size, posUpdate, newValue);
    printf("Mang sau khi cap nhat: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
void update(int arr[], int size, int pos, int value) {
    if (pos >= 0 && pos < size) {
        arr[pos] = value;
    } else {
        printf("Vi tri khong hop le!\n");
    }
}
