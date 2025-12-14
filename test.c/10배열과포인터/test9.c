#include <stdio.h>

void bubble_sort(int *arr, int n) {
    // 정렬은 배열의 값을 바꾸는 작업이므로 const를 붙이면 안 된다.
    // arr의 내용이 바뀌어야 하므로 int*로 받는다.

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    int arr[6];

    printf("정수 6개 입력: ");
    for (int i = 0; i < 6; i++) scanf("%d", &arr[i]);

    bubble_sort(arr, 6);

    for (int i = 0; i < 6; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
