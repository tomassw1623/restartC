// 문제 3. 배열 출력: printArray(int arr[], int size)

#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    printArray(a, 5);
    return 0;
}
