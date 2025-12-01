// 문제 3. 배열 출력: printArray(int arr[], int size)

#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {    // 인덱스는 0부터 시작
        printf("%d ", arr[i]);          // 배열 값 하나 출력
    }
    printf("\n");
}

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};         // 길이가 5인 배열
    printArray(a, 5);                   // 배열 출력
    return 0;
}
